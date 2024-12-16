#pragma once

#include <string>
#include <ostream>

class Rank {
	public:
		enum class RankType {
			IRON,
	  	      	BRONZE,
	  	      	SILVER,
	  	      	GOLD,
	  	      	PLATINUM,
	  	      	DIAMOND
		};
	private:
		RankType rank;
	public:
		// constructor
		explicit Rank(RankType rank = RankType::IRON);

		RankType getRank() const;

		void setRank(RankType newRank);

		static std::string toString(RankType rank);

		static RankType fromString(const std::string& rankType);

		friend std::ostream& operator<<(std::ostream& os, const Rank& rank);

};
