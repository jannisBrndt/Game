#include "Stats.h"
#include <string>

class Character {
	private:
		std::string name;
		Stats stats;
	public:
		Character();
		
	Character(const std::string& name, int health, int attackDamage, int attackPower, int armor, int magicResistance);

		const std::string& getName() const;

		const Stats& getStats() const;

		void setName(const std::string& name);

		void setStats(int health = 0,
			      int attackDamage = 0,
			      int attackPower = 0,
			      int armor = 0,
			      int magicResistance = 0
		);
};
