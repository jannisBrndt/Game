#pragma once

#include <string>

enum class Race {
	HUMAN,	
	BARBARIAN,
};

Race stringToRace(const std::string& raceStr);

std::string raceToString(Race race);
