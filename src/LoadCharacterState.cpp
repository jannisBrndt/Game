#include "../include/LoadCharacterState.h"
#include "../include/InGameState.h"
#include "../include/MainMenuState.h"
#include <filesystem>
#include <ios>
#include <iostream>
#include <limits>

LoadCharacterState::LoadCharacterState(CharacterManager& manager)
	: characterManager(manager) {}

// get a list of available characters
std::vector<std::string> LoadCharacterState::getSavedCharacters(const std::string& directory) {
	std::vector<std::string> characters;
	try {
		for (const auto& entry : std::filesystem::directory_iterator(directory)) {
			if (entry.path().extension() == ".json") {
				characters.push_back(entry.path().stem().string());
			}
		}
	} catch (const std::filesystem::filesystem_error& e) {
		std::cerr << "\033[31mError accessing save directory: " << e.what() << "\033[0m\n";
	}

	return characters;
}

void LoadCharacterState::render() {
	
	std::cout << "\n[Load Character] === Load Character ===\n";

	// display saved characters
	std::string saveDirectory = "../saves";
	auto characters = getSavedCharacters(saveDirectory);

	if (characters.empty()) {
		std::cout << "[Load Character State] No saved characters found!\n";
	} else {
		std::cout << "Available characters:\n";
		for (size_t i = 0; i < characters.size(); ++i) {
			std::cout << i + 1 << ". " << characters[i] << "\n"; 
		}
	}
	std::cout << "0. Back to Main Menu\n";
}


void LoadCharacterState::handleInput(StateManager& stateManager) {
	std::string saveDirectory = "../saves";
	auto characters = getSavedCharacters(saveDirectory);

	if (characters.empty()) {
		std::cout << "[Load Character State] No characters to load. Returning to Main Menu!\n";
		stateManager.transitionTo(std::make_unique<MainMenuState>(characterManager));
		return;
	}

	int choice = 0;
	while (true) {
		std::cout << "\nEnter your choice: ";
		std::cin >> choice;

		if (std::cin.fail() || choice < 0 || static_cast<size_t>(choice) > characters.size()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "\n033[31mInvalid choice. Please try again.\033[0m\n";
		} else {
			break;
		}
	}

	if (choice == 0) {
		stateManager.transitionTo(std::make_unique<MainMenuState>(characterManager));
		return;
	}

	// load selected character.
	std::string selectedCharacter = characters[choice - 1];
	
	try {
		auto loadedCharacter = characterManager.loadCharacterFromFile(saveDirectory, selectedCharacter); 
		characterManager.setCharacter(std::make_shared<Character>(loadedCharacter));
		std::cout  << "\nSuccessfully loaded character: " << loadedCharacter.getName() << "\n";
		stateManager.transitionTo(std::make_unique<InGameState>(characterManager));
	} catch (const std::exception& e) {
		std::cerr << "\033[31mError loading character: " << e.what() << "\033[0m\n";
		stateManager.transitionTo(std::make_unique<MainMenuState>(characterManager));
	}
}

void LoadCharacterState::update(StateManager& stateManager) {

}
