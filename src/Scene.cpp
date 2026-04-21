#include "Scene.h"
#include <iostream>

int Scene::getSceneID() const {
	return id;
}

std::string Scene::getSceneName() const {
	return name;
}

int Scene::getSceneWidth() const {
	return width;
}

int Scene::getSceneHeight() const {
	return height;
}

std::string Scene::getSceneBackground() const {
	return background;
}

void Scene::setSceneID(int option) {
	id = option;
}

void Scene::setSceneName(std::string option) {
	name = option;
}

void Scene::setSceneWidth(int option) {
	width = option;
}

void Scene::setSceneHeight(int option) {
	height = option;
}

void Scene::setSceneBackground(std::string option) {
	background = option;
}