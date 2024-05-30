#ifndef COMMON_H
#define COMMON_H

#include <vector>

struct Point {
    int x, y;
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
    bool operator!=(const Point& other) const {
        return !(*this == other);
    }
};

struct Node {
    Point point;
    float cost;
    bool operator>(const Node& other) const {
        return cost > other.cost;
    }
};

using Grid = std::vector<std::vector<int>>;

std::vector<Point> getNeighbors(const Point& point, const Grid& grid);
float distance(const Point& a, const Point& b);

namespace std {
    template <>
    struct hash<Point> {
        size_t operator()(const Point& p) const {
            return hash<int>()(p.x) ^ hash<int>()(p.y);
        }
    };
}

#endif // COMMON_H
