#include "../include/StateManager.h"
#include "../include/CharacterManager.h"
#include "../include/MainMenuState.h"

int main() {
	
	std::shared_ptr<Character> initialCharacter = std::make_shared<Character>();
	CharacterManager characterManager(initialCharacter);

	// create a StateManager instance
	StateManager stateManager;
	// set the starting state to main menu state
	stateManager.transitionTo(std::make_unique<MainMenuState>(characterManager));

	while (stateManager.hasState()) {
		stateManager.render();
		stateManager.handleInput();
		stateManager.update();
	}

	return 0;
}
