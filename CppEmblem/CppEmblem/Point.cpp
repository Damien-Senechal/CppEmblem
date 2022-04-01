#include "Point.h"

Point::Point()
{
	setX(0);
	setY(0);
	setValue('.');
}

Point::Point(int x, int y)
{
	setX(x);
	setY(y);
}

Point::Point(int x, int y, char v)
{
	setX(x);
	setY(y);
	setValue(v);
}

Point Point::operator+(Point& other)
{
	return Point(getX() + other.getX(), getY() + other.getY());
}

Point Point::operator-(Point& other)
{
	return Point(getX() - other.getX(), getY() - other.getY());
}

bool Point::operator==(Point other)
{
	return getX() == other.getX() && getY() == other.getY();
}

bool Point::operator!=(Point other)
{
	return getX() != other.getX() && getY() != other.getY();
}

bool Point::Equals(Point other)
{
	return getX() == other.getX() && getY() == other.getY();
}

int Point::GetHashCode()
{
	return getX()^getY();
}

string Point::ToString()
{
	string temp;
	temp += "([";
	temp += to_string(getX());
	temp += "],[";
	temp += to_string(getY());
	temp += "])";
	return temp;
}
