#include "../include/StateManager.h"

void StateManager::transitionTo(std::unique_ptr<GameState> newState) {
	currentState = std::move(newState);
}

void StateManager::handleInput() {
	if (currentState) {
		currentState->handleInput(*this);
	}
}

void StateManager::render() {
	if (currentState) {
		currentState->render();
	}
}

void StateManager::update() {
	if (currentState) {
		currentState->update(*this);
	}
}

bool StateManager::hasState() const {
	return currentState != nullptr;
}
