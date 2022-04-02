#pragma once
#include<vector>

using namespace std;

class LevelData
{
protected:
	//attributes
	vector<vector<int>> values;
public:
	//constructors
	LevelData();
	LevelData(vector<vector<int>> v);
	//getters
	inline const vector<vector<int>>& getValues() const { return this->values; }
	//setters
	void setValues(vector<vector<int>> v) { this->values = v; }
	//methods

};

