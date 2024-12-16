#include <gtest/gtest.h>
#include "../include/Character.h"
#include <memory>

TEST(CharacterTest, InitializeEmptyCharacter) {

	// Create empty character object
	auto testCharacter = std::make_shared<Character>("", Race::HUMAN, Rank::RankType::IRON, 0, 0, 0, 0, 0);

	EXPECT_EQ(testCharacter->getName(), "");
	EXPECT_EQ(testCharacter->getRace(), Race::HUMAN);
	EXPECT_EQ(testCharacter->getStats().getHealth(), 0);
	EXPECT_EQ(testCharacter->getStats().getAttackDamage(), 0);
	EXPECT_EQ(testCharacter->getStats().getAttackPower(), 0);
	EXPECT_EQ(testCharacter->getStats().getArmor(), 0);
	EXPECT_EQ(testCharacter->getStats().getMagicResistance(), 0);
}

TEST(CharacterTest, InitializeFullCharacter) {

	// Create character object with random values
	auto testCharacter = std::make_shared<Character>("test", Race::HUMAN, Rank::RankType::IRON, 1, 2, 3, 4, 5);

	EXPECT_EQ(testCharacter->getName(), "test");
	EXPECT_EQ(testCharacter->getRace(), Race::HUMAN);
	EXPECT_EQ(testCharacter->getStats().getHealth(), 1);
	EXPECT_EQ(testCharacter->getStats().getAttackDamage(), 2);
	EXPECT_EQ(testCharacter->getStats().getAttackPower(), 3);
	EXPECT_EQ(testCharacter->getStats().getArmor(), 4);
	EXPECT_EQ(testCharacter->getStats().getMagicResistance(), 5);
}
