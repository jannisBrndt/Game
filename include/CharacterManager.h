#pragma once

#include "Character.h"
#include <memory>

class CharacterManager {
	private:
		std::shared_ptr<Character> character;

	public:
		CharacterManager(std::shared_ptr<Character> character);
		
		Character loadCharacterFromFile(const std::string& filePath);

		void saveCharacterToFile(const std::shared_ptr<Character>& character, const std::string& filePath);
};
