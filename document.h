#pragma once

#include <cstdint>
#include "geometry.h"
#include "style.h"
#include <unordered_map>
#include <vector>

using StyleId = std::uint32_t;

struct Shape {
    StyleId styleId;
    Geometry geometry;
};


class Document {
    std::unordered_map<StyleId, Style> styleTable;
    std::vector<Shape> shapes;
};
