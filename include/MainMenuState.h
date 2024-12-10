#include "CharacterManager.h"
#include "GameState.h"
#include "StateManager.h"

class MainMenuState : public GameState {
	private:
		CharacterManager& characterManager;
	public:
		MainMenuState(CharacterManager& manager) : characterManager(manager) {}
		void handleInput(StateManager& stateManager) override;
		void update(StateManager& stateManager) override;
		void render() override;
};
