#include "../include/MainMenuState.h"
#include "../include/LoadCharacterState.h"
#include "../include/CharacterCreationState.h"
#include "../include/ExitMenuState.h"
#include <iostream>

void MainMenuState::render() {
	std::cout << "\n[Main Menu] === Main Menu ===\n";
	std::cout << "1. Create Character\n2. Load Character\n3. Quit Game\n";
}

void MainMenuState::handleInput(StateManager& stateManager) {

	int choice = 0;
	std::cout << "[Main Menu] Please enter your choice: ";
	std::cin >> choice;

	switch (choice) {
		case 1:
			// transition to characer creation state
			std::cout << "\n[Main Menu] Transitioning to Character Creation";
			stateManager.transitionTo(std::make_unique<CharacterCreationState>(characterManager));
			break;
		case 2:
			// transition to character loading state
			std::cout << "\n[Main Menu] Transitioning to Loading Character";
			stateManager.transitionTo(std::make_unique<LoadCharacterState>(characterManager));
			break;
		case 3:
			// transition to quitting state
			stateManager.transitionTo(std::make_unique<ExitMenuState>());
			break;
		default:
			// 
			std::cout << "[Main Menu] No valid input was specified!\n";
			
	}
}

void  MainMenuState::update(StateManager& stateManager) {
	std::cout << "[Main Menu] Placeholder for updating Main Menu State.\n";
}
