#pragma once
#include <iostream>

class Scene
{
	public:
		// Default constructor
		Scene() : id(0), name(""), width(0), height(0), background("") {}

		// Parameterised constructor
		Scene(int aID, std::string aName, int aWidth, int aHeight, std::string aBackground)
			: id(aID), name(aName), width(aWidth), height(aHeight), background(aBackground) {}

		// Getters
		int getSceneID() const;
		std::string getSceneName() const;
		int getSceneWidth() const;
		int getSceneHeight() const;
		std::string getSceneBackground() const;

		// Setters
		void setSceneID(int);
		void setSceneName(std::string);
		void setSceneWidth(int);
		void setSceneHeight(int);
		void setSceneBackground(std::string);

	private:
		int id;
		std::string name;
		int width;
		int height;
		std::string background;
};