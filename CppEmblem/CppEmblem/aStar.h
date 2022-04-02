#pragma once
#include <iostream>
#include <iomanip>
#include <math.h>
#include <ctime>
#include <string>
#include <queue>

using namespace std;

class aStar
{
protected:
	int xSize;
	int ySize;
	const int xDir[4] = { 1, 0, -1, 0 };
	const int yDir[4] = { 0, 1, 0, -1 };
	vector<vector<int>> squares;
	vector<vector<int>> closedNodes;
	vector<vector<int>> openNodes;
	vector<vector<int>> dirMap;

public:
};

