#pragma once

#include "GameState.h"

class ExitMenuState : public GameState {
	public:
		void handleInput(StateManager& stateManager) override;
		void update(StateManager& stateManager) override;
		void render() override;
};
