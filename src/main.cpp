#include "Game.h"
#include <iostream>

int main()
{
    // Setup
    Game game(1000, 500, "MiscSpaceEngine", false, 30); // Creates game object with window width, height, name, fullscreen and fps
    Log::setLogLevel(Log::INFO); // Sets the logging level
    Log::secret("STAN TWICE"); // For the funnies
    game.windowInit(); game.gameLoop(); // Initialise window and start game loop
}