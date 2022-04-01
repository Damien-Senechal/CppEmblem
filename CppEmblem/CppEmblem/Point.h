#pragma once

#include<string>
#include<iostream>

using namespace std;

class Point
{
protected:

	//attributes
	int xCoord;
	int yCoord;
	char value;

public:

	//constructors
	Point();
	Point(int x, int y);
	Point(int x, int y, char v);

	//getters
	inline const int& getX() const { return this->xCoord; }
	inline const int& getY() const { return this->yCoord; }
	inline const char& getValue() const { return this->value; }

	//setters
	void setX(int x) { this->xCoord = x; }
	void setY(int y) { this->yCoord = y; }
	void setValue(int v) { this->value = v; }

	//operators
	Point operator+(Point& other);
	Point operator-(Point& other);
	bool operator==(Point other);
	bool operator!=(Point other);

	//methods
	bool Equals(Point other);
	int GetHashCode();
	string ToString();
};

