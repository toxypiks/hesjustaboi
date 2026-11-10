#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <raylib.h>

#define SCREEN_WIDTH  280
#define SCREEN_HEIGHT 240

#define PIXEL_SIZE 4

#define GRID_WIDTH  (SCREEN_WIDTH / PIXEL_SIZE)
#define GRID_HEIGHT (SCREEN_HEIGHT / PIXEL_SIZE)

void DrawPixel(int x, int y, Color color);

void DrawPixelGrid();

#endif
