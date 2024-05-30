#include "AStar.h"
#include <cmath>
#include <algorithm>

AStar::AStar(const Grid& grid)
: mGrid(grid) {}

std::vector<Point> AStar::findPath(const Point& start, const Point& goal) {
    std::priority_queue<Node, std::vector<Node>, std::greater<Node>> openSet;
    openSet.push({start, 0});

    std::unordered_map<Point, Point> cameFrom;
    std::unordered_map<Point, float> gScore;
    gScore[start] = 0;

    std::unordered_map<Point, float> fScore;
    fScore[start] = heuristic(start, goal);

    while (!openSet.empty()) {
        Point current = openSet.top().point;
        openSet.pop();

        if (current == goal) {
            return reconstructPath(cameFrom, current);
        }

        for (const Point& neighbor : getNeighbors(current, mGrid)) {
            float tentative_gScore = gScore[current] + distance(current, neighbor);
            if (tentative_gScore < gScore[neighbor]) {
                cameFrom[neighbor] = current;
                gScore[neighbor] = tentative_gScore;
                fScore[neighbor] = gScore[neighbor] + heuristic(neighbor, goal);
                openSet.push({neighbor, fScore[neighbor]});
            }
        }
    }

    return {}; // Return an empty path if no path is found
}

std::vector<Point> AStar::reconstructPath(const std::unordered_map<Point, Point>& cameFrom, const Point& current) {
    std::vector<Point> path;
    Point curr = current;
    while (cameFrom.find(curr) != cameFrom.end()) {
        path.push_back(curr);
        curr = cameFrom.at(curr);
    }
    path.push_back(curr); // Add the start point
    std::reverse(path.begin(), path.end());
    return path;
}

float AStar::heuristic(const Point& a, const Point& b) {
    return std::abs(a.x - b.x) + std::abs(a.y - b.y); // Manhattan distance
}
