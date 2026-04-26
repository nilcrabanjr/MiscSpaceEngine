#include "Object.h"
#include <iostream>

// Getters
std::string Object::getObjectName() const {
	return name;
}

std::vector<Sprite> Object::getSpriteCollection() const {
	return spriteCollection;
}

int Object::getObjectXPosition() const {
	return pos_x;
}

int Object::getObjectYPosition() const {
	return pos_y;
}

std::pair<int, int> Object::getObjectPosition() const {
	return { pos_x, pos_y };
}

bool Object::getObjectVisibility() const {
	return isVisible;
}

// Setters
void Object::setObjectName(std::string option) {
	name = option;
}

void Object::setSpriteCollection(std::vector<Sprite> option) {
	spriteCollection = option;
}

void Object::setObjectXPosition(int option) {
	pos_x = option;
}

void Object::setObjectYPosition(int option) {
	pos_y = option;
}

void Object::setObjectVisibility(bool option) {
	isVisible = option;
}

// Utility
void Object::addSpriteToSpriteCollection(Sprite& option) {
	spriteCollection.emplace_back(option);
}

// Functionality
void Object::update() {
	// std::cout << name << " has been updated." << std::endl;
}