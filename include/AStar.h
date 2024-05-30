#ifndef ASTAR_H
#define ASTAR_H

#include <vector>
#include <queue>
#include <unordered_map>
#include <functional>
#include "Common.h"

class AStar {
public:
    AStar(const Grid& grid);
    std::vector<Point> findPath(const Point& start, const Point& goal);

private:
    Grid mGrid;
    std::vector<Point> reconstructPath(const std::unordered_map<Point, Point>& cameFrom, const Point& current);
    float heuristic(const Point& a, const Point& b);
};

#endif // ASTAR_H
