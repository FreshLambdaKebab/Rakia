#pragma once

#include <SFML\Graphics.hpp>
#include <memory>

class Framework
{
public:
	Framework();
	~Framework();

	void init(int screenWidth,int screenHeight);
	void BeginRender(unsigned int r,unsigned int g,unsigned int b);
	void EndRender();
	void handleEvents();
	bool isOpen();

	int getScreenWidth()const { return m_screenWidth; }
	int getScreenHeight()const { return m_screenHeight; }

	sf::RenderWindow* getWindow()const{return m_window;}

private:
	int m_screenWidth;
	int m_screenHeight;

	sf::RenderWindow* m_window;
};

