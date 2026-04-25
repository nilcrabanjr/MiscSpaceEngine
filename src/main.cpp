#include "Game.h"
#include <iostream>

int main()
{
    // Setup
    // Creates game object with window width, height, name, fullscreen and fps
    Game game(1000, 500, "MiscSpaceEngine", false, 30);
    // Sets the logging level
    Log::setLogLevel(Log::INFO);

    // Setup of testing scenes and objects
    Object obj_test1("obj_test1"); Object obj_test2("obj_test2");
    Scene test_scene("test_scene", "resources/Example.png");
    test_scene.addObjectToCollection(obj_test1); test_scene.addObjectToCollection(obj_test2);
    game.addSceneToCollection(test_scene);
    // Initialise window and start game loop
    game.windowInit(); game.gameLoop(); 
}