#include "State.h"

State::State()
{
	this->name = "null";
}

State::State(string n)
{
	this->name = n;
}

void State::Enter()
{
	AddListeners();
}

void State::Exit()
{
	RemoveListeners();
}

void State::onDestroy()
{
	RemoveListeners();
}

void State::AddListeners()
{
}

void State::RemoveListeners()
{
}
