#include "App.h"
#include <iostream>

App::App()
{
	m_framework.init(800, 600);

	if (!texture.loadFromFile("res/textures/mario-sprite.png"))
	{
		std::cout << "Error: could not load texture\n";
	}

	sprite.setTexture(texture);
	sprite.setPosition({ 100,100 });

	if (!font.loadFromFile("res/fonts/pricedown bl.ttf"))
	{
		std::cout << "Error: could not load font\n";
	}

	text.setFont(font);
	text.setString("Hello you fucking fuckers!");
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::Red);
	text.setPosition({ 400,300 });
}

App::~App()
{
}

void App::run()
{
	while (m_framework.isOpen())
	{
		m_framework.handleEvents();

		m_framework.BeginRender(255, 0, 255);

		m_framework.getWindow()->draw(sprite);
		m_framework.getWindow()->draw(text);

		m_framework.EndRender();
	}
}
