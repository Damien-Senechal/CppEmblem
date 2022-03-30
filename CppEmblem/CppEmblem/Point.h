#pragma once
class Point
{
protected:

	//attributes
	int xCoord;
	int yCoord;

public:

	//constructors
	Point();
	Point(int x, int y);

	//getters
	inline const int& getX() const { return this->xCoord; }
	inline const int& getY() const { return this->yCoord; }

	//setters
	void setX(int x) { this->xCoord = x; }
	void setY(int y) { this->yCoord = y; }

	//operators
	Point operator+(Point other);
	Point operator-(Point other);
	bool operator==(Point other);
	bool operator!=(Point other);
};

