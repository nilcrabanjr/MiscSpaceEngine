#pragma once
#include <iostream>
#include <vector>

#include "Sprite.h"

class Object
{
	public:
		// Default constructor
		Object() : name("") {}

		// Parameterised constructor
		Object(std::string aName) : name(aName) {}

		// Getters
		std::string getObjectName() const;
		std::vector<Sprite> getSpriteCollection() const;

		// Setters
		void setObjectName(std::string);
		void setSpriteCollection(std::vector<Sprite>);

		// Utility
		void addSpriteToSpriteCollection(Sprite&);

	private:
		std::string name;
		std::vector<Sprite> spriteCollection;
};