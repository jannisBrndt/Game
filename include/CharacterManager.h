#pragma once

#include "Character.h"
#include <memory>

class CharacterManager {
	private:
		std::shared_ptr<Character> character;

	public:
		CharacterManager() : character(std::make_shared<Character>()) {}
		CharacterManager(std::shared_ptr<Character> character) : character(std::move(character)) {}
		
		Character loadCharacterFromFile(const std::string& directory, const std::string& characterName);

		void saveCharacterToFile(const std::shared_ptr<Character>& character, const std::string& directory);

		void setCharacter(std::shared_ptr<Character> newCharacter);

		std::shared_ptr<Character> getCharacter();

};
