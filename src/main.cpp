#include "raylib.h"
#include "resource_dir.h"
#include "Game.h"
#include <iostream>

int main()
{
    // Setup
    Game gameObject;
    const int WINDOW_WIDTH = 1920;
    const int WINDOW_HEIGHT = 1080;

    Scene testScene1(0, "testScene1", WINDOW_WIDTH, WINDOW_HEIGHT, "resources/Backgrounds/testBackground1.png");
    Scene testScene2(1, "testScene2", WINDOW_WIDTH, WINDOW_HEIGHT, "resources/Backgrounds/testBackground2.png");

    gameObject.addSceneToGameScenes(testScene1);
    gameObject.addSceneToGameScenes(testScene2);

    // Window setup
    SetTraceLogLevel(LOG_ERROR);
    SetConfigFlags(FLAG_WINDOW_UNDECORATED);
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "MiscSpaceEngine");
    ToggleFullscreen();
    SetTargetFPS(30);

    // Texture setup
    Texture2D testScene1Background = LoadTexture(testScene1.getSceneBackground().c_str());
    Texture2D testScene2Background = LoadTexture(testScene2.getSceneBackground().c_str());

    Texture2D currentTexture = testScene1Background;
    int currentTextureInt = 0;

    // Debug
    std::cout << "Debug Console Log" << std::endl;
    gameObject.printGameScenes();

    while (!WindowShouldClose())
    {
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            if (currentTextureInt == 0)
            {
                currentTexture = testScene2Background;
                currentTextureInt = 1;
            }
            else
            {
                currentTexture = testScene1Background;
                currentTextureInt = 0;
            }
        }

        BeginDrawing();
        ClearBackground(BLACK);
        DrawTexture(currentTexture, 0, 0, WHITE);
        EndDrawing();
    }

    UnloadTexture(testScene1Background);
    UnloadTexture(testScene2Background);
    CloseWindow();
    return 0;
}