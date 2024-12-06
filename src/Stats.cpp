#include "../include/Stats.h"

Stats::Stats()
	: health(0), attackDamage(0), attackPower(0), armor(0), magicResistance(0) {}

Stats::Stats(int health, int attackDamage, int attackPower, int armor, int magicResistance)
	: health(health), attackDamage(attackDamage), attackPower(attackPower), armor(armor), magicResistance(magicResistance) {}

int Stats::getHealth() const {
	return health;
}

int Stats::getAttackDamage() const {
	return attackDamage;
}

int Stats::getAttackPower() const {
	return attackPower;
}

int Stats::getArmor() const {
	return armor;
}

int Stats::getMagicResistance() const {
	return magicResistance;
}
