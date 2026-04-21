#pragma once
#include <iostream>
#include <vector>

class Sprite
{
	public:
		// Getters
		std::string getSpriteName() const;
		std::string getSpritePath() const;
		std::vector<Sprite> getSpriteCollection() const;

		// Setters
		void setSpriteName(std::string);
		void setSpritePath(std::string);
		void addToSpriteCollection(Sprite&);

		// Debug
		void printSpriteCollection();

	private:
		std::string name;
		std::string spritePath;
		std::vector<Sprite> spriteCollection;
};
