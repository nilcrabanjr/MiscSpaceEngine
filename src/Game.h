// Required dependencies
#pragma once
#include <iostream>
#include <vector>

// Game class dependencies
#include "Scene.h"
#include "Sprite.h"

class Game 
{
	public:
		// Utility
		void addSceneToGameScenes(Scene&);

		// Debug
		void printGameScenes();

	private:
		std::vector<Scene> gameScenes;
};
