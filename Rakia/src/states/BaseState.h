#pragma once

#include <SFML\Graphics.hpp>

class Application;

class BaseState
{
public:
	BaseState(Application& app);
	virtual ~BaseState(){}

	virtual void handleInput(const sf::Event& ev) = 0;
	virtual void handleInput() = 0;
	virtual void update(float dt) = 0;
	virtual void render() = 0;

protected:
	Application* m_pApplication;
};

