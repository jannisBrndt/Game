#include "../include/CharacterManager.h"
#include "../include/Rank.h"
#include <filesystem>
#include <nlohmann/json.hpp>
#include <fstream>
#include <iostream>

using json = nlohmann::json;

Character CharacterManager::loadCharacterFromFile(const std::string& directory, const std::string& characterName) {
	
	// default character, return if error
	Character character;
		
	std::string filePath = directory + "/" + characterName + ".json";
	
	std::fstream file(filePath);
	if (!file.is_open()) {
		std::cerr << "\033[31mError: Could not open character file!\033[0m\n";
		return character;
	}

	try {
		// parsing
		json data;
		file >> data;
		
		// validate JSON fields
		if (!data.contains("name") ||
		    !data.contains("race") ||
		    !data.contains("rank") ||
		    !data.contains("health") ||
		    !data.contains("attackDamage") ||
		    !data.contains("attackPower") ||
		    !data.contains("armor") ||
		    !data.contains("magicResistance")) {
		
			std::cerr << "\033[31mError: Invalid or missing fields in JSON!\033[0m\n";
			return character;
		}
		
		// Descerialization of chacharacter and giving option for default value
		std::string name = data.value("name", "Unknown");
		Race race = stringToRace(data["race"]);
		Rank::RankType rank = Rank::fromString(data["rank"]);
		int health = data.value("health", 0);
		int attackDamage = data.value("attackDamage", 0);
		int attackPower = data.value("attackPower", 0);
		int armor = data.value("armor", 0);
		int magicResistance = data.value("magicResistance", 0);
		
		// character creation
		return Character(name, race, rank, health, attackDamage, attackPower, armor, magicResistance);
	
	} catch (const json::parse_error& e) {
		std::cerr << "\033[31mError parsing JSON data: " << e.what() << "\n";
	} catch (const std::exception& e) {
		std::cerr << "\033[31mError: " << e.what() << "\033[0m\n";
	}

	return Character();
}

// take a const reference character because it is not modifying it
void CharacterManager::saveCharacterToFile(const std::shared_ptr<Character>& character, const std::string& directory) {

		
	// ensure directory exists
	try {
		if (!std::filesystem::exists(directory)) {
			std::filesystem::create_directories(directory);
		}
	} catch (const std::filesystem::filesystem_error& e) {
		std::cerr << "\033[31mError: Could not create directory: " << e.what() << "033[0m\n";
		return;
	}

	// generate filePath
	std::string filePath = directory + "/" + character->getName() + ".json";

	// open the file for writing and delete previous content (trunc)
	std::ofstream file(filePath, std::ofstream::trunc);

	if (!file) {
		std::cerr << "\033[31mError: Could not open file for writing: " << filePath << "\033[0m\n";
		return;
	}
	
	try {
		// create JSON
		// create empty JSON object
		json data;
		
		// call stats once instead of everytime
		const auto & stats = character->getStats();

		data["name"] = character->getName();
		data["race"] = raceToString(character->getRace());
		data["rank"] = Rank::toString(character->getRank().getRank());
		data["health"] = stats.getHealth();
		data["attackDamage"] = stats.getAttackDamage();
		data["attackPower"] = stats.getAttackPower();
		data["armor"] = stats.getArmor();
		data["magicResistance"] = stats.getMagicResistance();
		
		// write data to file
		file << data;

		if (!file.good()) {
			std::cerr << "\033[31mError: Failed to write character data to file!\033[0m\n";
		} else {
			std::cout << "Character data saved to: " << filePath << "\n";
		}
	
	} catch (const json::exception& e) {
		std::cerr << "\033[31m" << e.what() << "\033[0m\n";
		return;
	}
}

void CharacterManager::setCharacter(std::shared_ptr<Character> newCharacter) {
	character = std::move(newCharacter);
}

std::shared_ptr<Character> CharacterManager::getCharacter() {
	return character;
}
