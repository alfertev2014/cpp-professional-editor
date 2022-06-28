#pragma once

#include <vector>
#include <variant>

struct Vector2d {
    double x;
    double y;
};

struct Line {
    Vector2d start;
    Vector2d end;
};

struct Rectangle {
    Vector2d topLeft;
    Vector2d bottomRight;
};

struct Ellipse {
    Vector2d center;
    double radiusX;
    double radiusY;
};

struct Path {
    std::vector points;
};

struct Polygon {
    std::vector verticles;
};

struct Compound;

using Geometry = std::variant<
    Line,
    Rectangle,
    Ellipse,
    Path,
    Polygon,
    Compound
>;

struct Compound {
    std::vector<Geometry> figures;
};

