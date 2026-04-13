#pragma once
#include <iostream>

class Tile
{
	public:
		// Getters
		int getTileID() const;
		bool getTileWalkable() const;
		bool getTileLootable() const;
		bool getTileDoor() const;
		bool getTileSpawn() const;
		bool getTileExtract() const;
		int getTileTextureID() const;

		// Setters
		void setTileID(int);
		void setTileWalkable(bool);
		void setTileLootable(bool);
		void setTileDoor(bool);
		void setTileSpawn(bool);
		void setTileExtract(bool);
		void setTileTextureID(int);

		// Debug
		void printTile();

		// Constructor
		Tile(int c_id, bool c_walk, bool c_loot, bool c_door, bool c_spawn, bool c_extract, int c_texture) : 
			id(c_id),
			isWalkable(c_walk),
			isLootable(c_loot),
			isDoor(c_door),
			isSpawn(c_spawn),
			isExtract(c_extract),
			tileTextureID(c_texture){}
		
	private:
		// Details
		int id;

		// Attributes
		bool isWalkable;
		bool isLootable;
		bool isDoor;
		bool isSpawn;
		bool isExtract;

		// Graphics
		int tileTextureID;
};

