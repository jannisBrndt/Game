#include "Stats.h"
#include "Rank.h"
#include "Race.h"
#include <string>

class Character {
	private:
		std::string name;
		Stats stats;
		Race race;
		Rank rank;
	public:
		Character();
		Character(const std::string& name,
	    		  Race race,
	    		  Rank::RankType rankType,
	    		  int health, int attackDamage, int attackPower, int armor, int magicResistance);

		const std::string& getName() const;
		const Stats& getStats() const;
		Race getRace() const;
		Rank getRank() const;

		void setName(const std::string& name);
		void setStats(int health = 0,
			      int attackDamage = 0,
			      int attackPower = 0,
			      int armor = 0,
			      int magicResistance = 0
		);
		void setRace(Race race);
		void setRank(Rank::RankType newRank);
};
