#include "Framework.h"

Framework::Framework():
	m_screenWidth(0),
	m_screenHeight(0)
{
}

Framework::~Framework()
{
	//delete the window
	if (m_window)
	{
		delete m_window;
		m_window = nullptr;
	}
}

void Framework::init(int screenWidth,int screenHeight)
{
	m_screenWidth = screenWidth;
	m_screenHeight = screenHeight;

	//create window 
	m_window = new sf::RenderWindow(sf::VideoMode(m_screenWidth, m_screenHeight), "This is the fucking title of the window");

}

void Framework::BeginRender(unsigned int r,unsigned int g,unsigned int b)
{
	//clear screen to desired color
	m_window->clear(sf::Color(r,g,b,255));
}

void Framework::EndRender()
{
	//display rendered content on screen
	m_window->display();
}

void Framework::handleEvents()
{
	sf::Event windowEvent;

	while (m_window->pollEvent(windowEvent))
	{
		if (windowEvent.type == sf::Event::Closed)
			m_window->close();

		//check if user pressed escape to close
		if (windowEvent.key.code == sf::Keyboard::Escape)
			m_window->close();
	}
}

bool Framework::isOpen()
{
	return m_window->isOpen();
}
