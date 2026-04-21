#include "Object.h"
#include <iostream>

std::string Object::getObjectName() const {
	return name;
}

std::vector<Sprite> Object::getSpriteCollection() const {
	return spriteCollection;
}

void Object::setObjectName(std::string option) {
	name = option;
}

void Object::setSpriteCollection(std::vector<Sprite> option) {
	spriteCollection = option;
}

void Object::addSpriteToSpriteCollection(Sprite& option) {
	spriteCollection.emplace_back(option);
}