// Required dependencies
#pragma once
#include <iostream>
#include <vector>
#include <utility>

// Game class dependencies
#include "raylib.h"
#include "Log.h"
#include "Scene.h"
#include "Sprite.h"
#include "Object.h"

class Game 
{
	public:
		// Default constructor
		Game() : windowWidth(0), windowHeight(0), windowName(""), isFullscreen(false), targetFPS(0) {}

		// Parameterised constructor
		Game(int aWindowWidth, int aWindowHeight, std::string aWindowName, bool aIsFullscreen, int aTargetFPS) :
		windowWidth(aWindowWidth), windowHeight(aWindowHeight), windowName(aWindowName), isFullscreen(aIsFullscreen), targetFPS(aTargetFPS) {}

		// Getters
		int getWindowWidth() const;
		int getWindowHeight() const;
		std::string getWindowName() const;
		bool getIsFullscreen() const;
		int getTargetFPS() const;
		const std::vector<Scene>& getSceneCollection() const;
		int getActiveSceneIndex() const;

		// Setters
		void setWindowWidth(int);
		void setWindowHeight(int);
		void setWindowName(std::string);
		void setIsFullscreen(bool);
		void setTargetFPS(int);
		void setActiveSceneIndex(int);

		// Main
		bool windowInit();
		int gameLoop();

		// Utility
		void addSceneToCollection(Scene&);
		void addSceneCollection(std::vector<Scene>);

	private:
		// Window info
		int windowWidth;
		int windowHeight;
		std::string windowName;
		bool isFullscreen;
		int targetFPS;

		// Scenes
		std::vector<Scene> sceneCollection;
		int activeSceneIndex = 0;
};
