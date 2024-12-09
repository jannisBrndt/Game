#include "../include/Character.h"

Character::Character() : name(""), stats() {}

Character::Character(const std::string& name, int health, int attackDamage, int attackPower, int armor, int magicResistance)
: name(name), stats(health, attackDamage, attackPower, armor, magicResistance) {}

const std::string& Character::getName() const {
	return name;
}

const Stats& Character::getStats() const {
	return stats;
}

void Character::setName(const std::string& name) {
	this->name = name;
}

void Character::setStats(int health,
			 int attackDamage,
			 int attackPower,
			 int armor,
			 int magicResistance) {
	stats.setHealth(health);
	stats.setAttackDamage(attackDamage);
	stats.setAttackPower(attackPower);
	stats.setArmor(armor);
	stats.setMagicResistance(magicResistance);
}
