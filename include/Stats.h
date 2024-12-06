#pragma once

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
};
