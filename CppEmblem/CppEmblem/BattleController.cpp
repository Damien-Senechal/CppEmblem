#include "BattleController.h"

BattleController::BattleController()
{
	this->board = Board();
	this->levelData = LevelData();
	this->pos = Point();
	this->initBattleState = State("InitBattleState");
}

void BattleController::Start()
{
	setState(initBattleState);
}
