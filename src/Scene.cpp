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

Background Scene::getSceneBackground() const {
	return scene_background;
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

void Scene::setSceneBackground(Background option) {
	scene_background = option;
}

void Scene::debug_ScenePrint() {
	std::cout << "ID: " << id << "\nName: " << name << "\nWidth: " << width << "\nHeight: " << height << "\nBackground ID: " << scene_background.getBackgroundID() << "\nBackground Name: " << scene_background.getBackgroundName();
}