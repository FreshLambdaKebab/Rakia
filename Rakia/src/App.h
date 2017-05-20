#pragma once

#include "Framework.h"

#include <memory>
#include <stack>

class App
{
public:
	App();
	~App();

	void run();

private:
	Framework m_framework;

	//create & load a texture
	sf::Texture texture;
	//create sprite
	sf::Sprite sprite;
	//create a font
	sf::Font font;
	//create text
	sf::Text text;

};

