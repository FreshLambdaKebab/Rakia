#include "Framework.h"

Framework::Framework() :
	m_screenWidth(0),
	m_screenHeight(0)
{
}


Framework::~Framework()
{
}

void Framework::init(int screenWidth,int screenHeight)
{
	m_screenWidth = screenWidth;
	m_screenHeight = screenHeight;

	m_window = std::make_unique<sf::RenderWindow>(sf::VideoMode(m_screenWidth, m_screenHeight), "Window Cunt Title");
}

void Framework::clear(unsigned int r, unsigned int g, unsigned int b)
{
	m_window->clear(sf::Color(r,g,b,255));
}

void Framework::display()
{
	m_window->display();
}

void Framework::handleEvents()
{
	sf::Event windowEvent;

	while (m_window->pollEvent(windowEvent))
	{
		if (windowEvent.type == sf::Event::Closed)
		{
			m_window->close();
		}

		if (windowEvent.key.code == sf::Keyboard::Escape)
		{
			m_window->close();
		}
	}
}

bool Framework::isOpen()
{
	return m_window->isOpen();
}
