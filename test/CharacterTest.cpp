#include <gtest/gtest.h>
#include "../include/Character.h"

TEST(CharacterTest, InitializeEmptyCharacter) {

	// Create empty character object
	Character character;

	EXPECT_EQ(character.getName(), "");
	EXPECT_EQ(character.getStats().getHealth(), 0);
	EXPECT_EQ(character.getStats().getAttackDamage(), 0);
	EXPECT_EQ(character.getStats().getAttackPower(), 0);
	EXPECT_EQ(character.getStats().getArmor(), 0);
	EXPECT_EQ(character.getStats().getMagicResistance(), 0);
}

TEST(CharacterTest, InitializeFullCharacter) {

	// Create character object with random values
	Character character("Test", 1, 2, 3, 4, 5);

	EXPECT_EQ(character.getName(), "Test");
	EXPECT_EQ(character.getStats().getHealth(), 1);
	EXPECT_EQ(character.getStats().getAttackDamage(), 2);
	EXPECT_EQ(character.getStats().getAttackPower(), 3);
	EXPECT_EQ(character.getStats().getArmor(), 4);
	EXPECT_EQ(character.getStats().getMagicResistance(), 5);
}
