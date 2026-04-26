#include "Scene.h"
#include "log.h"
#include "raylib.h"
#include <iostream>

// Getters
std::string Scene::getSceneName() const {
	return name;
}

std::string Scene::getSceneBackground() const {
	return background;
}

const std::vector<Object>& Scene::getObjectCollection() const {
	return objectCollection;
}

// Setters
void Scene::setSceneName(std::string option) {
	name = option;
}

void Scene::setSceneBackground(std::string option) {
	background = option;
}

// Utility
void Scene::addObjectToCollection(Object& option) {
	objectCollection.emplace_back(option);
}

void Scene::removeObjectFromCollectionByIndex(int option) {
	objectCollection.erase(objectCollection.begin() + option);
}

void Scene::removeObjectFromCollectionFromBack() {
	objectCollection.pop_back();
}

// Functionality
void Scene::init() {
	backgroundTexture = LoadTexture(getSceneBackground().c_str());

	if (backgroundTexture.id > 0) {
		hasBackgroundTexture = true;
	}
	else {
		hasBackgroundTexture = false;
		if (backgroundTexture.id <= 0) {
			Log::warning("Failed to load scene background: " + background);
		}
	}
}

void Scene::update() {
	for (Object& obj : objectCollection) {
		obj.update();
	}
}

void Scene::draw() {
	if (hasBackgroundTexture) {
		DrawTexture(backgroundTexture, 0, 0, WHITE);
	}
}