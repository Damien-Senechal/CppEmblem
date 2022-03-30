#include "Point.h"

Point::Point()
{
	setX(0);
	setY(0);
}

Point::Point(int x, int y)
{
	setX(x);
	setY(y);
}

Point Point::operator+(Point other)
{
	return Point(getX() + other.getX(), getY() + other.getY());
}

Point Point::operator-(Point other)
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
