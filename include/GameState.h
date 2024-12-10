#pragma once

#include <memory>

class StateManager;

class GameState {
	public:
		virtual ~GameState() = default;
		
		// methods are virtual and not implemented here, therefore ... = 0
		virtual void handleInput(StateManager& stateManager) = 0;
		virtual void render() = 0;
		virtual void update(StateManager& stateManager) = 0;
};
