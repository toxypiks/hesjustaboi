#include <stdio.h>
#include <raylib.h>
#include "eyes.h"

#define SCREEN_WIDTH 280
#define SCREEN_HEIGHT 240

static const Color CYAN = { 0, 220, 255, 255 };

static void DrawMouth(int cx, int cy)
{
    DrawRectangle(cx - 20, cy,      6, 9, CYAN);
    DrawRectangle(cx - 14, cy + 9,  8, 7, CYAN);
    DrawRectangle(cx - 6,  cy + 16, 12, 6, CYAN);
    DrawRectangle(cx + 6,  cy + 16, 8, 6, CYAN);
    DrawRectangle(cx + 14, cy + 9,  8, 7, CYAN);
    DrawRectangle(cx + 22, cy,      6, 9, CYAN);
}

static void DrawCheeks(int x, int y)
{
    DrawRectangle(x, y + 5, 11, 6, CYAN);
    DrawRectangle(x + 15, y, 11, 6, CYAN);
}

int main()
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "starboi");
    SetTargetFPS(60);

    Camera2D camera = { 0 };
    camera.offset = (Vector2){ 0, 15 };
    camera.target = (Vector2){ 0, 0 };
    camera.rotation = 0;
    camera.zoom = 1.0f;

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);

        BeginMode2D(camera);

        DrawKawaiiEye(80, 105);
        DrawKawaiiEye(200, 105);

        DrawMouth(140, 143);

        DrawCheeks(25, 151);
        DrawCheeks(229, 151);

        EndMode2D();

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
