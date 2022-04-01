#include "LevelData.h"

LevelData::LevelData()
{
	this->values = vector<vector<int>>();
}

LevelData::LevelData(vector<vector<int>> v)
{
	this->values = v;
}
