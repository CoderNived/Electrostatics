#include "raylib.h"

int main() {
    InitWindow(800, 450, "raylib works!");
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("It works!", 350, 200, 20, BLACK);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
