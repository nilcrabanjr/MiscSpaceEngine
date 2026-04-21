#include "Sprite.h"
#include <iostream>

std::string Sprite::getSpriteName() const {
	return name;
}

std::string Sprite::getSpritePath() const {
	return spritePath;
}

std::vector<Sprite> Sprite::getSpriteCollection() const {
	return spriteCollection;
}

void Sprite::setSpriteName(std::string option) {
	name = option;
}

void Sprite::setSpritePath(std::string option) {
	spritePath = option;
}

void Sprite::addToSpriteCollection(Sprite& option) {
	spriteCollection.emplace_back(option);
}

void Sprite::printSpriteCollection() {
	std::cout << "Sprites in" << name << "\n\n";
	for (Sprite sprite : spriteCollection) {
		std::cout << sprite.getSpriteName() << "\n";
	}
}