#include "../include/Character.h"

Character::Character() : name(""), race(Race::HUMAN), stats() {}

Character::Character(const std::string& name, Race race, Rank::RankType rankType, int health, int attackDamage, int attackPower, int armor, int magicResistance)
: name(name), race(race), rank(rankType), stats(health, attackDamage, attackPower, armor, magicResistance) {}

const std::string& Character::getName() const {
	return name;
}

const Stats& Character::getStats() const {
	return stats;
}

Race Character::getRace() const {
	return race;
}

Rank Character::getRank() const {
	return rank;
}

void Character::setRank(Rank::RankType newRank) {
	rank.setRank(newRank);
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

void Character::setRace(Race race) {
	this->race = race;
}
