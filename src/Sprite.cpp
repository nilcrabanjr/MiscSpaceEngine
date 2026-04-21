#include "Sprite.h"
#include <iostream>

std::string Sprite::getSpriteName() const {
	return name;
}

std::string Sprite::getSpritePath() const {
	return spritePath;
}

void Sprite::setSpriteName(std::string option) {
	name = option;
}

void Sprite::setSpritePath(std::string option) {
	spritePath = option;
}