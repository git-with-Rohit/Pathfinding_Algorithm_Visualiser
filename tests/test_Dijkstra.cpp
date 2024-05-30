#include "catch.hpp"
#include "Dijkstra.h"
#include "Common.h"

TEST_CASE("Dijkstra's Pathfinding Algorithm") {
    Grid grid = {
        {0, 1, 0, 0, 0},
        {0, 1, 0, 1, 0},
        {0, 0, 0, 1, 0},
        {0, 1, 0, 1, 0},
        {0, 0, 0, 0, 0}
    };

    Dijkstra dijkstra(grid);
    Point start = {0, 0};
    Point goal = {4, 4};
    std::vector<Point> path = dijkstra.findPath(start, goal);

    REQUIRE(path.size() > 0);
    REQUIRE(path.front() == start);
    REQUIRE(path.back() == goal);
}
