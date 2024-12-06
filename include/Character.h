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
};
