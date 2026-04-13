#pragma once
#include <iostream>
#include <string>
#include "raylib.h"

class Background
{
public:
	Background() : id(0), name(""), file_location(""), bg_texture{} {}

	Background(int aID, std::string aName, std::string aFileLocation)
		: id(aID), name(aName), file_location(aFileLocation), bg_texture{} {
	}

	// Getters
	int getBackgroundID() const;
	std::string getBackgroundName() const;
	std::string getBackgroundFileLocation() const;
	Texture2D getBackgroundTexture() const;

	// Setters
	void setBackgroundID(int);
	void setBackgroundName(std::string);
	void setBackgroundFileLocation(std::string);
	void setBackgroundTexture();

	// Cleanup
	void unloadBackgroundTexture();

	// Debug
	void debug_BackgroundPrint();

private:
	int id;
	std::string name;
	std::string file_location;
	Texture2D bg_texture;
};