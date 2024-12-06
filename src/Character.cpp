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
