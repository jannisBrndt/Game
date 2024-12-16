#include <filesystem>
#include <gtest/gtest.h>
#include <memory>
#include <string>
#include "../include/CharacterManager.h"

TEST(CharacterManagerTest, SaveCharaterToFile) {
	std::string directory = "../saves";

	if (!std::filesystem::exists(directory)) {
		std::filesystem::create_directory(directory);
	}
	
	// create a test character with test data
	auto testCharacter = std::make_shared<Character>("test", Race::HUMAN, Rank::RankType::IRON, 100, 10, 5, 20, 3);
	
	// create a character manager for the testCharacter
	CharacterManager manager(testCharacter);
	
	// save character to file
	manager.saveCharacterToFile(testCharacter, directory);
	
	// create loaded character from file
	Character loadedCharacter = manager.loadCharacterFromFile(directory, testCharacter->getName());

	EXPECT_EQ(loadedCharacter.getName(), "test");
}

TEST(CharacterManagerTest, LoadCharacterFromTestFile) {
	
	std::string directory = "../saves";
	
	auto dummyCharacter = std::make_shared<Character>("dummy", Race::HUMAN, Rank::RankType::IRON, 1, 1, 1, 1, 1);

	CharacterManager manager(dummyCharacter);

	Character loadedCharacter = manager.loadCharacterFromFile(directory, "test");

	EXPECT_EQ(loadedCharacter.getName(), "test");
	EXPECT_EQ(loadedCharacter.getStats().getHealth(), 100);
	EXPECT_EQ(loadedCharacter.getStats().getAttackDamage(), 10);
	EXPECT_EQ(loadedCharacter.getStats().getAttackPower(), 5);
	EXPECT_EQ(loadedCharacter.getStats().getArmor(), 20);
	EXPECT_EQ(loadedCharacter.getStats().getMagicResistance(), 3);
}

