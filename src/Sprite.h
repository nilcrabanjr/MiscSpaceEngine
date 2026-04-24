#pragma once
#include <iostream>

class Sprite
{
	public:
		// Default constructor
		Sprite() : id(0), name(""), spritePath("") {}

		// Parameterised constructor
		Sprite(int aID, std::string aName, std::string aSpritePath) 
			: id(aID), name(aName), spritePath(aSpritePath) {}

		// Getters
		int getSpriteID() const;
		std::string getSpriteName() const;
		std::string getSpritePath() const;

		// Setters
		void setSpriteID(int);
		void setSpriteName(std::string);
		void setSpritePath(std::string);

	private:
		int id;
		std::string name;
		std::string spritePath;
};
