#include "../include/ExitMenuState.h"
#include "../include/StateManager.h"
#include <iostream>

void ExitMenuState::handleInput(StateManager& stateManager) {
	// no input expected for exiting the game
}

void ExitMenuState::update(StateManager& stateManager) {
	stateManager.transitionTo(nullptr);
}

void ExitMenuState::render() {
	std::cout << "[Exit Menu] Exiting the game... Have a nice day!\n";
}
