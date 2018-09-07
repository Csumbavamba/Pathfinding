#pragma once

class Tile;

class Map
{
public:
	Map();
	~Map();

	Tile * GetTileAt(int row, int column) const;
	void Initialise(); // Set up the Tiles for pathfinding
	void DrawMap();

private:

	Tile * map[20][20];
};

