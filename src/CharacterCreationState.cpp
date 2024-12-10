#include "../include/CharacterCreationState.h"
#include "../include/MainMenuState.h"
#include "../include/RaceStatsLoader.h"
#include "../include/Race.h"
#include <iostream>
#include <filesystem>


void CharacterCreationState::render() {

	std::cout << "Welcome to the character creation process!";
	std::cout << "\nPlease follow the instructions for a successfull character creation.";

}

void CharacterCreationState::handleInput(StateManager& stateManager) {
	
	std::string name;

	std::cout << "[DEBUG] handling input!\n";

	std::cout << "\n=== Character Creation Menu ===\n";

	// validate character name	
	while (true) {
		std::cout << "Enter the character's name: ";
		std::cin >> name;

		if (name.empty() || name.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789") != std::string::npos) {
			std::cout << "\033[31mInvalid name. Please use alpha numeric characters only.\033[0m\n";
		} else {
			break;
		}
	}
	
	// validate character race
	int raceChoice = 0;
	while (true) {

		std::cout << "\nChoose the character's race:\n";
		std::cout << "\n1. Human\n2. Barbarian";
		std::cout << "\nEnter your choice: ";
		std::cin >> raceChoice;

		if (std::cin.fail() ||
			(raceChoice != 1 && raceChoice != 2)) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "\033[31mInvalid input. Please enter 1 or 2.\033[0m\n";
		} else {
			break;
		}
	}

	Race race = (raceChoice == 1) ? Race::HUMAN : Race::BARBARIAN;

	// load stats based on race
	Stats raceStats;
	try {
		raceStats = RaceStatsLoader::loadStatsForRace(race);
	} catch (const std::exception& e) {
		std::cerr << e.what() << "\n";
		std::cout << "Using default stats for " << raceToString(race) << ".\n";
		raceStats = Stats(1, 1, 1, 1, 1);
	}


	Character newCharacter(name,
			       race,
			       raceStats.getHealth(),
			       raceStats.getAttackDamage(),
			       raceStats.getAttackPower(),
			       raceStats.getArmor(),
			       raceStats.getMagicResistance()
	);

	// ensure directory exists
	std::string directory = "../saves";
	try {
		if (!std::filesystem::exists(directory)) {
			std::filesystem::create_directory(directory);
		}
	} catch (const std::filesystem::filesystem_error& e) {
		std::cerr << "\033[31mError creating save directory: " << e.what() << "\033[0m\n";
		return;
	}
	
	std::string savePath = directory + "/" + name + ".json";
	if (std::filesystem::exists(savePath)) {
		std::cout << "\033[33mWarning: A character with this name already exists. Overwriting...\033[0m\n";
	}

	try {
		characterManager.saveCharacterToFile(std::make_shared<Character>(newCharacter), directory);
		std::cout << "\nCharacter saved nSuccessfully to " << savePath << "\n";
	} catch (const std::exception& e) {
		std::cerr << "\033[31mError saving character: " << e.what() << "\033[0m\n";
		return;
	}

	std::cout << "\nSuccessfully created character " << newCharacter.getName() << "\n";

	stateManager.transitionTo(std::make_unique<MainMenuState>(characterManager));
}

void CharacterCreationState::update(StateManager& stateManager) {
}
