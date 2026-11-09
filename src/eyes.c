#include <raylib.h>
#include "eyes.h"

Color CYAN = { 0, 220, 255, 255 };
//Color BLUE = { 0, 100, 220, 255 };
Color DARK = { 3, 8, 25, 255 };

// Draw a pixel block relative to the eye center
void Pixel(int cx, int cy, int x, int y, int width, int height, Color color)
{
    DrawRectangle(cx + x, cy + y, width, height, color);
}

void DrawKawaiiEye(int cx, int cy)
{
    // Subtle glow
    Pixel(cx, cy, -30, -20, 60, 40, Fade(CYAN, 0.08f));

    // Outer cyan frame
    Pixel(cx, cy, -10, -35, 20, 5, CYAN);
    Pixel(cx, cy, -20, -30, 40, 5, CYAN);
    Pixel(cx, cy, -25, -25, 50, 10, CYAN);
    Pixel(cx, cy, -30, -15, 60, 35, CYAN);
    Pixel(cx, cy, -25,  20, 50, 10, CYAN);
    Pixel(cx, cy, -20,  30, 40, 5, CYAN);
    Pixel(cx, cy, -10,  35, 20, 5, CYAN);

    // Dark inner area
    Pixel(cx, cy, -10, -30, 20, 5, DARK);
    Pixel(cx, cy, -15, -25, 30, 5, DARK);
    Pixel(cx, cy, -20, -20, 40, 5, DARK);
    Pixel(cx, cy, -25, -15, 50, 35, DARK);
    Pixel(cx, cy, -20,  20, 40, 5, DARK);
    Pixel(cx, cy, -15,  25, 30, 5, DARK);

    // Blue lower reflection
    Pixel(cx, cy, -20, 12, 7, 15, BLUE);
    Pixel(cx, cy, -15, 20, 10, 10, BLUE);
    Pixel(cx, cy, -5,  27, 25, 5, BLUE);

    // Main white highlight
    Pixel(cx, cy, -20, -20, 15, 5, WHITE);
    Pixel(cx, cy, -25, -15, 20, 20, WHITE);
    Pixel(cx, cy, -20,   5, 15, 5, WHITE);

    // Small white highlight
    Pixel(cx, cy, 5, 5, 10, 10, WHITE);

    // Cyan sparkle
    Pixel(cx, cy, 12, -5, 5, 15, CYAN);
    Pixel(cx, cy, 7, 0, 15, 5, CYAN);
}
