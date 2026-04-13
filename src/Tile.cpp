#include "Tile.h"
#include <iostream>

// Getters
int Tile::getTileID() const{
	return id;
}

bool Tile::getTileWalkable() const {
	return isWalkable;
}

bool Tile::getTileLootable() const {
	return isLootable;
}

bool Tile::getTileDoor() const {
	return isDoor;
}

bool Tile::getTileSpawn() const {
	return isSpawn;
}

bool Tile::getTileExtract() const {
	return isExtract;
}

int Tile::getTileTextureID() const {
	return tileTextureID;
}

// Setters
void Tile::setTileID(int target_id) {
	id = target_id;
}

void Tile::setTileWalkable(bool option) {
	isWalkable = option;
}
void Tile::setTileLootable(bool option) {
	isLootable = option;
}

void Tile::setTileDoor(bool option) {
	isDoor = option;
}

void Tile::setTileSpawn(bool option) {
	isSpawn = option;
}
void Tile::setTileExtract(bool option) {
	isExtract = option;
}

void Tile::setTileTextureID(int option) {
	tileTextureID = option;
}

// Debug
void Tile::printTile() {
	std::cout << "ID: " << id << "\nisWalkable: " << isWalkable << "\nisLootable: " << isLootable << "\nisDoor: " << isDoor << "\nisSpawn: " << isSpawn << "\nisExtract: " << isExtract << std::endl;
}