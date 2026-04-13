#include "raylib.h"
#include "resource_dir.h"
#include "Background.h"
#include "Scene.h"
#include <iostream>

int main()
{
    Background test_bg(1, "test_bg", "resources/Backgrounds/yurr.png");
    Scene test_scene(1, "test_scene", 1280, 704, test_bg);

    // testing
    test_bg.debug_BackgroundPrint();
    std::cout << "\n\n";
    test_scene.debug_ScenePrint();

    // Window setup
    SetTraceLogLevel(LOG_ERROR);
    const int width = 1280;
    const int height = 704;
    InitWindow(width, height, "MiscSpaceEngine");
    SetTargetFPS(60);

    // Load after InitWindow
    test_bg.setBackgroundTexture();

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawTexture(test_bg.getBackgroundTexture(), 0, 0, WHITE);
        EndDrawing();
    }

    test_bg.unloadBackgroundTexture();
    CloseWindow();
    return 0;
}