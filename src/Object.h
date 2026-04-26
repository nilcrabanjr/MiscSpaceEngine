#pragma once
#include <vector>
#include <utility>
#include <string>

#include "Sprite.h"

class Object
{
	public:
		// Default constructor
		Object() : name(""), pos_x(0), pos_y(0), isVisible(false), isMoving(false) {}

		// Parameterised constructor
		Object(std::string aName, int aPos_x, int aPos_y, bool aIsVisible, bool aIsMoving) : 
			name(aName), pos_x(aPos_x), pos_y(aPos_y), isVisible(aIsVisible), isMoving(aIsMoving) {}

		// Getters
		std::string getObjectName() const;
		std::vector<Sprite> getSpriteCollection() const;
		int getObjectXPosition() const;
		int getObjectYPosition() const;
		std::pair<int, int> getObjectPosition() const;
		bool getObjectVisibility() const;

		// Setters
		void setObjectName(std::string);
		void setSpriteCollection(std::vector<Sprite>);
		void setObjectXPosition(int);
		void setObjectYPosition(int);
		void setObjectVisibility(bool);

		// Utility
		void addSpriteToSpriteCollection(Sprite&);

		// Functionality
		void update();

	private:
		std::string name;
		int pos_x = 0; int pos_y = 0;
		bool isVisible;
		bool isMoving;
		std::vector<Sprite> spriteCollection;
};