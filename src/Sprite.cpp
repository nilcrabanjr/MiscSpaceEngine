#include "Sprite.h"
#include <iostream>

int Sprite::getSpriteID() const {
	return id;
}

std::string Sprite::getSpriteName() const {
	return name;
}

std::string Sprite::getSpritePath() const {
	return spritePath;
}

void Sprite::setSpriteID(int option) {
	id = option;
}

void Sprite::setSpriteName(std::string option) {
	name = option;
}

void Sprite::setSpritePath(std::string option) {
	spritePath = option;
}