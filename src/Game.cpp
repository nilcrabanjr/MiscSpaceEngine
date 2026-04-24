#include "Game.h"

// Getters
int Game::getWindowWidth() const {
    return WINDOW_WIDTH;
}

int Game::getWindowHeight() const {
    return WINDOW_HEIGHT;
}

std::pair<int, int> Game::getWindowSize() const {
    return WINDOW_SIZE;
}

std::string Game::getWindowName() const {
    return WINDOW_NAME;
}

bool Game::getIsFullscreen() const {
    return IS_FULLSCREEN;
}

int Game::getTargetFPS() const {
    return TARGET_FPS;
}

std::vector<Scene> Game::getSceneCollection() const {
    return sceneCollection;
}

// Setters
void Game::setWindowWidth(int option) {
    WINDOW_WIDTH = option;
}

void Game::setWindowHeight(int option) {
    WINDOW_HEIGHT = option;
}

void Game::setWindowSize(std::pair<int, int> option) {
    WINDOW_SIZE = option;
}

void Game::setWindowName(std::string option) {
    WINDOW_NAME = option;
}

void Game::setIsFullscreen(bool option) {
    IS_FULLSCREEN = option;
}

void Game::setTargetFPS(int option) {
    TARGET_FPS = option;
}

// Main

void Game::windowInit() {
    Log::secret("STAN TWICE");
    SetTraceLogLevel(LOG_ERROR);
    SetConfigFlags(FLAG_WINDOW_UNDECORATED);
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_NAME.c_str());
    if (IS_FULLSCREEN == true) {
        ToggleFullscreen();
    }
    SetTargetFPS(TARGET_FPS);
    Log::info("Window initialised");
}

int Game::gameLoop() {
    Log::info("Game loop started");
    while (!WindowShouldClose())
    {

        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();
    }
    CloseWindow();
    Log::info("Window closed");
    Log::info("Game loop ended");
    return 0;
}

// Utility

void Game::addSceneToCollection(Scene& option) {
    sceneCollection.emplace_back(option);
}

void Game::addSceneCollection(std::vector<Scene> option) {
    sceneCollection = option;
}