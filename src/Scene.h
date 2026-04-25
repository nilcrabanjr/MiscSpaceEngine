#pragma once
#include <string>
#include "Object.h"

class Scene
{
	public:
		// Default constructor
		Scene() : name(""), background("") {}

		// Parameterised constructor
		Scene(std::string aName, std::string aBackground)
			: name(aName), background(aBackground) {}

		// Getters
		std::string getSceneName() const;
		std::string getSceneBackground() const;
		const std::vector<Object>& getObjectCollection() const;

		// Setters
		void setSceneName(std::string);
		void setSceneBackground(std::string);

		// Utility
		void addObjectToCollection(Object&);
		void removeObjectFromCollectionByIndex(int);
		void removeObjectFromCollectionFromBack();

		// Functionality
		void update();

	private:
		std::string name;
		std::string background;
		std::vector<Object> objectCollection;
};