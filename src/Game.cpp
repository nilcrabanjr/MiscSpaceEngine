#include "Game.h"

// Getters
int Game::getWindowWidth() const {
    return windowWidth;
}

int Game::getWindowHeight() const {
    return windowHeight;
}

std::string Game::getWindowName() const {
    return windowName;
}

bool Game::getIsFullscreen() const {
    return isFullscreen;
}

int Game::getTargetFPS() const {
    return targetFPS;
}

const std::vector<Scene>& Game::getSceneCollection() const {
    return sceneCollection;
}

int Game::getActiveSceneIndex() const {
    return activeSceneIndex;
}

// Setters
void Game::setWindowWidth(int option) {
    windowWidth = option;
}

void Game::setWindowHeight(int option) {
    windowHeight = option;
}

void Game::setWindowName(std::string option) {
    windowName = option;
}

void Game::setIsFullscreen(bool option) {
    isFullscreen = option;
}

void Game::setTargetFPS(int option) {
    targetFPS = option;
}

void Game::setActiveSceneIndex(int option) {
    activeSceneIndex = option;
}

// Main
bool Game::windowInit() {
    SetTraceLogLevel(LOG_ERROR);
    InitWindow(windowWidth, windowHeight, windowName.c_str());

    if (isFullscreen == true) {
        ToggleFullscreen();
    }

    SetTargetFPS(targetFPS);

    if (!sceneCollection.empty()) {
        sceneCollection[activeSceneIndex].init();
    }
    else {
        Log::warning("No scenes available to initialise");
    }

    Log::info("Window initialised");
    return true;
}

int Game::gameLoop() {
    Log::info("Game loop started");

    while (!WindowShouldClose())
    {
        if (!sceneCollection.empty()) {
            sceneCollection[activeSceneIndex].update();
        }

        BeginDrawing();
        ClearBackground(BLACK);

        if (!sceneCollection.empty()) {
            sceneCollection[activeSceneIndex].draw();
        }
        EndDrawing();
    }
    if (!sceneCollection.empty()) {
        sceneCollection[activeSceneIndex].unload();
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