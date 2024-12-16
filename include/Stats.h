#pragma once

#include <iostream>

class Stats {
	private:
		int health;
		int attackDamage;
		int attackPower;
		int armor;
		int magicResistance;

	public:
		Stats();

		Stats(int health,
		      int attackDamage,
		      int attackPower,
		      int armor,
		      int magicResistance);

		int getHealth() const;
		int getAttackDamage() const;
		int getAttackPower() const;
		int getArmor() const;
		int getMagicResistance() const;

		void setHealth(int amount);
		void setAttackDamage(int amount);
		void setAttackPower(int amount);
		void setArmor(int amount);
		void setMagicResistance(int amount);

		friend std::ostream& operator<<(std::ostream& os, const Stats& stats);
};
