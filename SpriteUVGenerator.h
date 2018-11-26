// Copyright 2018 Tihran Katolikian

#pragma once

#include <array>
#include <glm/vec2.hpp>

using RectCoords = std::array <glm::vec2, 4>;

class SpiteUVGenerator
{
public:
    SpiteUVGenerator(size_t rows, size_t columns, size_t number);
    ~SpiteUVGenerator() = default;

    RectCoords GetNextUV();

private:
    size_t const m_rows;
    size_t const m_columns;
    size_t const m_number;

    float m_verticalPart;
    float m_horizontalPart;

    size_t m_currentRow;
    size_t m_currentColumn;
    size_t m_currentIndex;
};
