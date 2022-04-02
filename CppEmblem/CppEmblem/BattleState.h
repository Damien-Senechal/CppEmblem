#pragma once
#include"BattleController.h"

class BattleState : State
{
protected:
	BattleController owner;
	Board board;
	LevelData levelData;
	Point pos;

public:
	inline const Board& getBoard() const { return this->owner.getBoard(); }
	inline const LevelData& getLevelData() const { return this->owner.getLevelData(); }
	inline const Point& getPoint() const { return this->owner.getPos(); }

	void setPos(Point p) { this->owner.setPos(p); }
};

