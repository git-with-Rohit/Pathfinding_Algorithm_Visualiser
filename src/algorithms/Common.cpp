#include "Common.h"
#include <cmath>

std::vector<Point> getNeighbors(const Point& point, const Grid& grid) {
    std::vector<Point> neighbors;
    int rows = grid.size();
    int cols = grid[0].size();

    if (point.x > 0 && grid[point.x - 1][point.y] == 0) {
        neighbors.push_back({point.x - 1, point.y});
    }
    if (point.x < rows - 1 && grid[point.x + 1][point.y] == 0) {
        neighbors.push_back({point.x + 1, point.y});
    }
    if (point.y > 0 && grid[point.x][point.y - 1] == 0) {
        neighbors.push_back({point.x, point.y - 1});
    }
    if (point.y < cols - 1 && grid[point.x][point.y + 1] == 0) {
        neighbors.push_back({point.x, point.y + 1});
    }

    return neighbors;
}

float distance(const Point& a, const Point& b) {
    return std::sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}
