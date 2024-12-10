#pragma once

#include "Race.h"
#include "Stats.h"

class RaceStatsLoader {
	public:
		static Stats loadStatsForRace(Race race);
};
