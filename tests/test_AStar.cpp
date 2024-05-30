#include "catch.hpp"
#include "AStar.h"
#include "Common.h"

TEST_CASE("A* Pathfinding Algorithm") {
    Grid grid = {
        {0, 1, 0, 0, 0},
        {0, 1, 0, 1, 0},
        {0, 0, 0, 1, 0},
        {0, 1, 0, 1, 0},
        {0, 0, 0, 0, 0}
    };

    AStar astar(grid);
    Point start = {0, 0};
    Point goal = {4, 4};
    std::vector<Point> path = astar.findPath(start, goal);

    REQUIRE(path.size() > 0);
    REQUIRE(path.front() == start);
    REQUIRE(path.back() == goal);
}
