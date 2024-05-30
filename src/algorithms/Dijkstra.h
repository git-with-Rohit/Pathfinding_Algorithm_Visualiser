#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include <vector>
#include <queue>
#include <unordered_map>
#include "Common.h"

class Dijkstra {
public:
    Dijkstra(const Grid& grid);
    std::vector<Point> findPath(const Point& start, const Point& goal);

private:
    Grid mGrid;
    std::vector<Point> reconstructPath(const std::unordered_map<Point, Point>& cameFrom, const Point& current);
};

#endif // DIJKSTRA_H
