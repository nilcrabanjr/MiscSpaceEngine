#include "Background.h"
#include <iostream>

int Background::getBackgroundID() const {
	return id;
}

std::string Background::getBackgroundName() const {
	return name;
}

std::string Background::getBackgroundFileLocation() const {
	return file_location;
}

Texture2D Background::getBackgroundTexture() const {
	return bg_texture;
}

void Background::setBackgroundID(int option) {
	id = option;
}

void Background::setBackgroundName(std::string option) {
	name = option;
}

void Background::setBackgroundFileLocation(std::string option) {
	file_location = option;
}

void Background::setBackgroundTexture() {
	bg_texture = LoadTexture(file_location.c_str());
}

void Background::unloadBackgroundTexture() {
	UnloadTexture(bg_texture);
}

void Background::debug_BackgroundPrint() {
	std::cout << "ID: " << id
		<< "\nName: " << name
		<< "\nFile Location: " << file_location;
}