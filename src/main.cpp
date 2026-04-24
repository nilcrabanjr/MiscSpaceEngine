#include "Game.h"
#include <iostream>

int main()
{
    // Setup
    Game game; // Creates game object
    Log::setLogLevel(Log::INFO); // Sets the logging level
    game.setWindowWidth(1000); game.setWindowHeight(500); // Sets window width and height
    game.setWindowName("MiscSpaceEngine"); game.setIsFullscreen(false); game.setTargetFPS(30); // Window coptions
    game.windowInit(); game.gameLoop(); // Initialise window and start game loop
}