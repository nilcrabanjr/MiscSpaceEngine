#include "Game.h"
#include <iostream>

void Game::printGameScenes() {
	std::cout << "Game Scenes\n\n";
	for (Scene scene : gameScenes) {
		std::cout <<  scene.getSceneName() << "\n";
	}
}

void Game::addSceneToGameScenes(Scene& option) {
	gameScenes.emplace_back(option);
}