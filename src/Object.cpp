#include "Object.h"
#include <iostream>

// getters
std::string Object::getObjectName() const {
	return name;
}

std::vector<Sprite> Object::getSpriteCollection() const {
	return spriteCollection;
}

// Setters
void Object::setObjectName(std::string option) {
	name = option;
}

void Object::setSpriteCollection(std::vector<Sprite> option) {
	spriteCollection = option;
}

// Utility
void Object::addSpriteToSpriteCollection(Sprite& option) {
	spriteCollection.emplace_back(option);
}

// Functionality
void Object::update() {
	// std::cout << name << " has been updated." << std::endl;
}