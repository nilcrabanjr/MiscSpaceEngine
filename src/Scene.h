#pragma once
#include <iostream>
#include "Background.h"

class Scene
{
	public:
		// Default constructor
		Scene()
			: id(0), name(""), width(0), height(0), scene_background() {
		}

		// Parameterised constructor
		Scene(int aID, std::string aName, int aWidth, int aHeight, Background aBackground)
			: id(aID), name(aName), width(aWidth), height(aHeight), scene_background(aBackground) {
		}

		// Getters
		int getSceneID() const;
		std::string getSceneName() const;
		int getSceneWidth() const;
		int getSceneHeight() const;
		Background getSceneBackground() const;

		// Setters
		void setSceneID(int);
		void setSceneName(std::string);
		void setSceneWidth(int);
		void setSceneHeight(int);
		void setSceneBackground(Background);

		// Debug
		void debug_ScenePrint();

	private:
		int id;
		std::string name;

		int width;
		int height;

		Background scene_background;
};