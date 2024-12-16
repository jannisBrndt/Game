#include "../include/Race.h"
#include <stdexcept>

Race stringToRace(const std::string& raceString) {
	if (raceString == "Human") return Race::HUMAN;
	if (raceString == "Barbarian") return Race::BARBARIAN;
	throw std::invalid_argument("Invalid race string: " + raceString);
}

std::string raceToString(Race race) {
	switch (race) {
		case Race::HUMAN:
			return "Human";
		case Race::BARBARIAN:
			return "Barbarian";
		default:
			throw std::invalid_argument("Unknown race");
	}
}
