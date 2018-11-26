#include "SpriteUVGenerator.h"

SpiteUVGenerator::SpiteUVGenerator(size_t const rows, const size_t columns, size_t const number)
    : m_rows(rows)
    , m_columns(columns)
    , m_number(number)
    , m_verticalPart(1.f / rows)
    , m_horizontalPart(1.f / columns)
    , m_currentRow(0)
    , m_currentColumn(0)
    , m_currentIndex(0)
{}

RectCoords SpiteUVGenerator::GetNextUV()
{
    using glm::vec2;
    
    vec2 const topLeft = { m_currentColumn * m_horizontalPart, m_currentRow * m_verticalPart };
    vec2 const topRight = topLeft + vec2(m_horizontalPart, 0.f);
    vec2 const downLeft = topLeft + vec2(0.f, m_verticalPart);
    vec2 const downRight = topLeft + vec2(m_horizontalPart, m_verticalPart);

    ++m_currentIndex;
    if (m_currentIndex >= m_number - 1)
    {
        m_currentIndex = m_currentRow = m_currentColumn = 0;
    }
    else
    {
        ++m_currentColumn;
        if (m_currentColumn >= m_columns - 1)
        {
            m_currentColumn = 0;
            ++m_currentRow;
        }
    }

    return { topRight, downRight, downLeft, topLeft };
}
