#include "../include/Rank.h"
#include <stdexcept>

// constructor
Rank::Rank(RankType initialRank) : rank(initialRank) {}

Rank::RankType Rank::getRank() const {
	return rank;
}

void Rank::setRank(RankType newRank) {
	rank = newRank;
}

// convert rank to stream
std::string Rank::toString(RankType rank) {
	switch (rank) {
		case RankType::IRON:
			return "Iron";
		case RankType::BRONZE:
			return "Bronze";
		case RankType::SILVER:
			return "Silver";
		case RankType::GOLD:
			return "Gold";
		case RankType::PLATINUM:
			return "Platinum";
		case RankType::DIAMOND:
			return "Diamond";
		default:
			throw std::invalid_argument("Invalid rank");
		
	}	
}

Rank::RankType Rank::fromString(const std::string &rankString) {
	if (rankString == "Iron") return RankType::IRON;
	if (rankString == "Bronze") return RankType::BRONZE;
	if (rankString == "Silver") return RankType::SILVER;
	if (rankString == "Gold") return RankType::GOLD;
	if (rankString == "Platinum") return RankType::PLATINUM;
	if (rankString == "Diamond") return RankType::DIAMOND;
	throw std::invalid_argument("invalid rank string: " + rankString);
}

std::ostream& operator<<(std::ostream& os, const Rank& rank) {
	os << rank.toString(rank.rank);
	return os;
}
