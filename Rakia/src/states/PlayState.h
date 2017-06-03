#pragma once

#include "BaseState.h"

class PlayState : public BaseState
{
public:
	PlayState(Application& app);
	~PlayState();

	void handleInput(const sf::Event& ev)override;
	void handleInput()override;
	void update(float dt)override;
	void render()override;
	
};

