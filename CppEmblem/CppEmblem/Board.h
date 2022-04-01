#pragma once
#include"LevelData.h"
class Board
{
protected:
	//attributes
	int width;
	int height;
	Point cursor;
	LevelData data;

public:
	//constructors
	Board();
	Board(LevelData d);
	//getters

	//setters

	//methods
	void Load(LevelData d);
	void Unload();
};

