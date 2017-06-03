#pragma once

#include <SFML\Graphics.hpp>
#include <memory>

class Framework
{
public:
	Framework();
	~Framework();

	void init(int screenWidth,int screenHeight);
	void clear(unsigned int r, unsigned int g, unsigned int b);
	void display();
	void handleEvents();
	bool isOpen();

	int getWindowWidth()const { return m_screenWidth; }
	int getWindowHeight()const { return m_screenHeight; }

private:
	int m_screenWidth, m_screenHeight;
	std::unique_ptr<sf::RenderWindow>m_window;

};

