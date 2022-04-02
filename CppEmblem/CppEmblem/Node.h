#pragma once
class Node
{
	int rPos;
	int cPos;

	int GValue;

	int FValue;

	struct Location {

		int row, col;

		Location() {
			row = col = 0;
		};

		Location(int r, int c) {
			row = r;
			col = c;
		};
	};

public:
	Node(const Location& loc, int g, int f);

	Location getLocation() const;
	int getGValue() const;
	int getFValue() const;

	void calculateFValue(const Location& locDest);
};

