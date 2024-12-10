#pragma once

#include <string>

enum class Race {
	HUMAN,	
	BARBARIAN,
};

inline std::string raceToString(Race race) {
	switch (race) {
		case Race::HUMAN:
			return "human";
			break;
		case Race::BARBARIAN:
			return "barbarian";
			break;
		default:
			return "unknown";
	}
}
