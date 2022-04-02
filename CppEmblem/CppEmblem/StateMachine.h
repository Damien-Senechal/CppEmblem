#pragma once
#include"State.h"
#include"LevelData.h"

class StateMachine
{
protected:
	State _currentSate;
	bool _inTransition;

public:


	inline const State& getState() const { return this->_currentSate; }
	inline const bool& getTransition() const { return this->_inTransition; }

	void setState(State s) { this->_currentSate = s; }
	void setTransition(bool t) { this->_inTransition = t; }

	virtual void Transition(State value);
};

