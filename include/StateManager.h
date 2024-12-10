#pragma once

#include "GameState.h"
#include <memory>

class StateManager {
	private:
		// pointer to the currentState
		std::unique_ptr<GameState> currentState;
	public:
		// transition to a new state
		void transitionTo(std::unique_ptr<GameState> newState);
		// handle input to current state
		void handleInput();
		// render current state
		void render();
		// update current state	
		void update();
		// check if there is a current state
		bool hasState() const;
};
