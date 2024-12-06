#include "../include/CharacterManager.h"
#include <nlohmann/json.hpp>
#include <fstream>

using json = nlohmann::json;

CharacterManager::CharacterManager(std::shared_ptr<Character> character)
	: character(character) {}

Character CharacterManager::loadCharacterFromFile(const std::string& filePath) {

	std::fstream file(filePath);

	json data = json::parse(file);

	std::string name = data["name"];
	int health = data["health"];
	int attackDamage = data["attackDamage"];
	int attackPower = data["attackPower"];
	int armor = data["armor"];
	int magicResistance = data["magicResistance"];

	Character character(name, health, attackDamage, attackPower, armor, magicResistance);
	
	return character;
}
