#include "Game.h"
#include <iostream>

int main()
{
    // Setup
    Game game;
    Log::setLogLevel(Log::WARNING);
    game.setWindowWidth(1000); game.setWindowHeight(500); 
    game.setWindowName("MiscSpaceEngine"); game.setIsFullscreen(false); game.setTargetFPS(30);
    game.windowInit(); game.gameLoop();
}