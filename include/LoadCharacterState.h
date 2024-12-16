#pragma once

#include "GameState.h"
#include "CharacterManager.h"
#include <vector>

class LoadCharacterState : public GameState {
	private:
		CharacterManager& characterManager;
		
		std::vector<std::string> getSavedCharacters(const std::string& directory);
	public:
		explicit LoadCharacterState(CharacterManager& manager);

		void render() override;
		void handleInput(StateManager& stateManager) override;
		void update(StateManager& stateManager) override;
};
