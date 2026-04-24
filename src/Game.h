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
		// Getters
		int getWindowWidth() const;
		int getWindowHeight() const;
		std::pair<int, int> getWindowSize() const;
		std::string getWindowName() const;
		bool getIsFullscreen() const;
		int getTargetFPS() const;

		// Setters
		void setWindowWidth(int);
		void setWindowHeight(int);
		void setWindowSize(std::pair<int, int>);
		void setWindowName(std::string);
		void setIsFullscreen(bool);
		void setTargetFPS(int);

		// Main
		void windowInit();
		int gameLoop();

	private:
		int WINDOW_WIDTH;
		int WINDOW_HEIGHT;
		std::pair<int, int> WINDOW_SIZE;
		std::string WINDOW_NAME;
		bool IS_FULLSCREEN;
		int TARGET_FPS;
};
