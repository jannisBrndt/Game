#include <gtest/gtest.h>
#include <memory>
#include <string>
#include "../include/CharacterManager.h"

TEST(CharacterManagerTest, LoadCharacterFromTestFile) {
	
	std::string filePath = "../saves/test.json";
	
	auto dummyCharacter = std::make_shared<Character>("dummy", 1, 1, 1, 1, 1);

	CharacterManager manager(dummyCharacter);

	Character loadedCharacter = manager.loadCharacterFromFile(filePath);

	EXPECT_EQ(loadedCharacter.getName(), "test");
	EXPECT_EQ(loadedCharacter.getStats().getHealth(), 100);
	EXPECT_EQ(loadedCharacter.getStats().getAttackDamage(), 10);
	EXPECT_EQ(loadedCharacter.getStats().getAttackPower(), 5);
	EXPECT_EQ(loadedCharacter.getStats().getArmor(), 20);
	EXPECT_EQ(loadedCharacter.getStats().getMagicResistance(), 3);

	
}