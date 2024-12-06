#include <gtest/gtest.h>
#include "../include/Stats.h"

TEST(StatsTest, InitialiseEmptyStats) {
	
	// create an empty stats object -> all stats should be 0
	Stats stats;

	EXPECT_EQ(stats.getHealth(), 0);
	EXPECT_EQ(stats.getAttackDamage(), 0);
	EXPECT_EQ(stats.getAttackPower(), 0);
	EXPECT_EQ(stats.getArmor(), 0);
	EXPECT_EQ(stats.getMagicResistance(), 0);
}

TEST(StatsTest, InitialiseFullStats) {

	// create an stats object with random values
	Stats stats(10, 11, 12, 13, 14);
	
	EXPECT_EQ(stats.getHealth(), 10);
	EXPECT_EQ(stats.getAttackDamage(), 11);
	EXPECT_EQ(stats.getAttackPower(), 12);
	EXPECT_EQ(stats.getArmor(), 13);
	EXPECT_EQ(stats.getMagicResistance(), 14);
}
