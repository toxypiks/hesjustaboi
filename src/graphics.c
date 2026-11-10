#include "graphics.h"

void DrawPixel(int x, int y, Color color)
{
    // Check if pixel is inside the grid
    if (x < 0 || x >= GRID_WIDTH ||
        y < 0 || y >= GRID_HEIGHT)
    {
        return;
    }

    DrawRectangle(
        x * PIXEL_SIZE,
        y * PIXEL_SIZE,
        PIXEL_SIZE,
        PIXEL_SIZE,
        color
    );
}

void DrawPixelGrid()
{
    Color gridColor = { 70, 70, 70, 100 };

    // Vertical lines
    for (int x = 0; x <= SCREEN_WIDTH; x += PIXEL_SIZE)
    {
        DrawLine(x, 0, x, SCREEN_HEIGHT, gridColor);
    }

    // Horizontal lines
    for (int y = 0; y <= SCREEN_HEIGHT; y += PIXEL_SIZE)
    {
        DrawLine(0, y, SCREEN_WIDTH, y, gridColor);
    }
}
