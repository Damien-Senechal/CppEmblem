#pragma once
#include"Board.h"

class BattleController : StateMachine
{
protected:
	Board board;
	LevelData levelData;
	Point pos;
	State initBattleState;

public:
	BattleController();

	inline const Board& getBoard() const { return this->board; }
	inline const LevelData& getLevelData() const { return this->levelData; }
	inline const Point& getPos() const { return this->pos; }
	inline const State& getState() const { return this->initBattleState; }

	void setPos(Point p) { this->pos = p; }

	void Start();
};

