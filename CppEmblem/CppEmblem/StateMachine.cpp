#include "StateMachine.h"

void StateMachine::Transition(State value)
{
	if (getState().getName() == value.getName() || getTransition()) {
		return;
	}

	setTransition(true);

	if (getState().getName() != "null") {
		this->_currentSate.Exit();
	}

	setState(value);

	if (getState().getName() != "null") {
		this->_currentSate.Enter();
	}

	setTransition(false);
}
