#include "CharacterManager.h"
#include "GameState.h"


class CharacterCreationState : public GameState {
	public:
		CharacterCreationState(CharacterManager& manager) : characterManager(manager) {}
		void handleInput(StateManager& stateManager) override;
		void update(StateManager& stateManager) override;
		void render() override;

	private:
		CharacterManager& characterManager;
};
