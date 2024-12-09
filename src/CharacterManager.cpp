#include "../include/CharacterManager.h"
#include <nlohmann/json.hpp>
#include <fstream>
#include <iostream>

using json = nlohmann::json;

CharacterManager::CharacterManager(std::shared_ptr<Character> character)
	: character(character) {}

Character CharacterManager::loadCharacterFromFile(const std::string& filePath) {
	
	Character character;

	std::fstream file(filePath);

	if (!file.is_open()) {
		std::cerr << "\033[31mError: Could not open character file!\033[0m\n";
		return character;
	}
	
	try {
		// parsing
		json data = json::parse(file);
		
		// validating
		if (!data.contains("health") ||
		    !data.contains("attackDamage") ||
		    !data.contains("attackPower") ||
		    !data.contains("armor") ||
		    !data.contains("magicResistance")) {
		
			std::cerr << "\033[31mError: Invalid or missing fields in JSON!\033[0m\n";
			return character;
		}
		
		// giving option for default value
		std::string name = data.value("name", "Unknown");
		int health = data.value("health", 0);
		int attackDamage = data.value("attackDamage", 0);
		int attackPower = data.value("attackPower", 0);
		int armor = data.value("armor", 0);
		int magicResistance = data.value("magicResistance", 0);
		
		// character creation
		character.setName(name);
		character.setStats(health, attackDamage, attackPower, armor, magicResistance);
		
	} catch (const json::parse_error& e) {
		std::cerr << "\033[31mError parsing JSON data: " << e.what() << "\n";
	}

	return character;
}

// take a const reference character because it is not modifying it
void CharacterManager::saveCharacterToFile(const std::shared_ptr<Character>& character, const std::string& filePath) {

	// open file in write only mode and use trunc to wipe pre existing data for clean update
	std::ofstream file(filePath, std::ofstream::trunc);
	
	// check if file exists
	if (!file) {
		std::cerr << "\033[31mError: Could not open character file!\033[0m\n";
		return;
	}
	
	try {
		// create JSON
		// create empty JSON object
		json data;
		
		// call stats once instead of everytime
		const auto & stats = character->getStats();
		data["name"] = character->getName();
		data["health"] = stats.getHealth();
		data["attackDamage"] = stats.getAttackDamage();
		data["attackPower"] = stats.getAttackPower();
		data["armor"] = stats.getArmor();
		data["magicResistance"] = stats.getMagicResistance();
		
		// write data to file
		file << data;

	} catch (const json::exception& e) {
		std::cerr << "\033[31m" << e.what() << "\033[0m\n";
		return;
	}
}
