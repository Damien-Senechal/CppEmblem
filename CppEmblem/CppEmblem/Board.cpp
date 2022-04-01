#include "Board.h"

Board::Board()
{
	this->width = 0;
	this->height = 0;
	this->cursor = Point();
	this->data = LevelData();
}

Board::Board(LevelData d)
{
	this->data = d;
	this->width = this->data.getValues().size();
	this->height = this->data.getValues()[0].size();
	this->cursor = Point();
}

void Board::Load(LevelData d)
{
	this->data = d;
	this->width = this->data.getValues().size();
	this->height = this->data.getValues()[0].size();
	this->cursor = Point();
}

void Board::Unload()
{
	this->data = LevelData();
	this->width = 0;
	this->height = 0;
	this->cursor = Point();
}
