#include "../include/InGameState.h"
#include "../include/MainMenuState.h"
#include <iostream>
#include <memory>

InGameState::InGameState(CharacterManager& manager)
	: characterManager(manager) {}

void InGameState::render() {
	auto currentCharacter = characterManager.getCharacter();
	std::cout << "\[In-Game Menu] === In-Game Menu ===\n";
	std::cout << "Character: " << currentCharacter->getName() << "\n";
	std::cout << "1. View Stats\n2. Save Character\n3. Exit to Main Menu\n";
}

void InGameState::handleInput(StateManager& stateManager) {
	int choice = 0;
	std::cout << "[In-Game Menu] Please enter your choice: ";
	std::cin >> choice;

	switch (choice) {
		case 1:
			// view character Stats
			std::cout << "\n[Character Stats]\n";
			std::cout << "\nName: " << characterManager.getCharacter()->getName();
			std::cout << "\nRace: " << raceToString(characterManager.getCharacter()->getRace());
			std::cout << "\nRank: " << characterManager.getCharacter()->getRank();
			std::cout << characterManager.getCharacter()->getStats() << "\n";
			break;

		case 2:
			// save character
			std::cout << "[In-Game Menu] Saving character...\n";
			try {
				std::string saveDirectory = "../saves";
				characterManager.saveCharacterToFile(characterManager.getCharacter(), saveDirectory);
				std::cout << "Character saved successfully to " << saveDirectory << ".\n";
			} catch (const std::exception& e) {
				std::cerr << "\033[31mError saving character: " << e.what() << "\033[0m\n";
			}
			break;
		case 3:
			// return to main Menu
			std::cout << "[In-Game Menu] Returning to the Main Menu...\n";
			stateManager.transitionTo(std::make_unique<MainMenuState>(characterManager));
			break;
		default:
			std::cout << "[In-Game Menu] Invalid choice. Please try again!\n";
	}
}

void InGameState::update(StateManager& stateManager) {

}
