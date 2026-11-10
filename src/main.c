#include <raylib.h>
#include "graphics.h"

static const Color CYAN = { 0, 225, 255, 255 };

int main(void)
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "starboi");
    SetTargetFPS(60);

    bool showGrid = true;

    while (!WindowShouldClose())
    {
        // Toggle grid with G
        if (IsKeyPressed(KEY_G))
        {
            showGrid = !showGrid;
        }

        BeginDrawing();
        ClearBackground(BLACK);

        // Test pixels
        DrawPixel(10, 10, BLUE);
        DrawPixel(11, 10, BLUE);
        DrawPixel(12, 10, BLUE);

        DrawPixel(11, 11, CYAN);
        DrawPixel(12, 11, CYAN);

        DrawPixel(13, 12, WHITE);

        // Draw grid on top
        if (showGrid)
        {
            DrawPixelGrid();
        }

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
