#pragma once
#include <iostream>

class Sprite
{
	public:
		// Getters
		std::string getSpriteName() const;
		std::string getSpritePath() const;

		// Setters
		void setSpriteName(std::string);
		void setSpritePath(std::string);

	private:
		std::string name;
		std::string spritePath;
};
