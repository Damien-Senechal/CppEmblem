#pragma once
#include"Point.h"
class State
{
protected:
	string name;

public:
	State();
	State(string n);

	inline const string& getName() const { return this->name; }

	void setX(string n) { this->name = n; }

	virtual void Enter();
	virtual void Exit();
	virtual void onDestroy();
	virtual void AddListeners();
	virtual void RemoveListeners();
};

