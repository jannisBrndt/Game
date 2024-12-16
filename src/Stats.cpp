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

void Stats::setHealth(int amount) {
	this->health = amount;
}

void Stats::setAttackDamage(int amount) {
	this->attackDamage = amount;
}

void Stats::setAttackPower(int amount) {
	this->attackPower = amount;
}

void Stats::setArmor(int amount) {
	this->armor = amount;
}

void Stats::setMagicResistance(int amount) {
	this->magicResistance = amount;
}

std::ostream& operator<<(std::ostream& os, const Stats& stats) {
	os << "\nHealth: " << stats.getHealth() << "\n";
	os << "Attack Damage: " << stats.getAttackDamage() << "\n";
	os << "Attack Power: " << stats.getAttackPower() << "\n";
	os << "Armor: " << stats.getArmor() << "\n";
	os << "Magic Resistance: " << stats.getMagicResistance() << "\n";
	return os;
}
