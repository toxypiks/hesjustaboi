#include <stdio.h>
#include <raylib.h>

int main()
{
    InitWindow(280, 240, "starboi");
    SetTargetFPS(60);

    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
