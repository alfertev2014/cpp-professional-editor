#pragma once

#include <cstdint>

struct Color {
    std::uint8_t r {};
    std::uint8_t g {};
    std::uint8_t b {};
    std::uint8_t alpha {255};

    Color() = default;

    Color(
        std::uint8_t r,
        std::uint8_t g,
        std::uint8_t b,
        std::uint8_t alpha
    ) : r(r), g(g), b(b), alpha(alpha) {}

    Color(std::uint32_t raw)
        : r(raw & 0xFF), g((raw >> 8) & 0xFF), b((raw >> 16) & 0xFF), alpha((raw >> 24) & 0xFF) {}
};

struct Pen {
    Color color;
    double width;
};

struct Brush {
    Color color;
};

struct Style {
    Pen pen;
    Brush brush;
};
