#include "../include/RaceStatsLoader.h"
#include <fstream>
#include "../include/Race.h"
#include <stdexcept>
#include <filesystem>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

Stats RaceStatsLoader::loadStatsForRace(Race race) {
	
	std::string filePath = "../races/" + raceToString(race) + ".json";

	if (!std::filesystem::exists(filePath)) {
		throw std::runtime_error("Race stats file not found: " + filePath);
	}

	std::ifstream file(filePath);
	json data;
	file >> data;

	if (!data.contains("health") ||
     	    !data.contains("attackDamage") ||
     	    !data.contains("attackPower") ||
     	    !data.contains("armor") ||
     	    !data.contains("magicResistance")) {
		throw std::runtime_error("Invalid or missing fields in race stats file: " + filePath);
	}

	return Stats(
		data["health"].get<int>(),
		data["attackDamage"].get<int>(),
		data["attackPower"].get<int>(),
		data["armor"].get<int>(),
		data["magicResistance"].get<int>()
	);
}
