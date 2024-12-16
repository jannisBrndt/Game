#pragma once

#include "GameState.h"
#include "CharacterManager.h"

class InGameState : public GameState {
	private:
		CharacterManager& characterManager;

	public:
		explicit InGameState(CharacterManager& manager);
		
		void render() override;
		void handleInput(StateManager& stateManager) override;
		void update(StateManager& stateManager) override;
};
