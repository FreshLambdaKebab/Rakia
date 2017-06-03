#include "Application.h"

#include "states\PlayState.h"

Application::Application()
{
}

Application::~Application()
{
}

void Application::init()
{
	//initialize the framework object
	m_framework.init(800,600);

	//push the playing state
	pushState(std::make_unique<PlayState>(*this));
}

void Application::run()
{
	while (m_framework.isOpen())
	{
		//handle all events
		m_framework.handleEvents();

		//clear teh window
		m_framework.clear(255,255,0);

		//input update and render the current state
		m_states.top()->handleInput();
		m_states.top()->update(0.0f);
		m_states.top()->render();

		//display the window
		m_framework.display();
	}
}

void Application::pushState(std::unique_ptr<BaseState> state)
{
	m_states.push(std::move(state));
}

void Application::popState()
{
	m_states.pop();
}

void Application::changeState(std::unique_ptr<BaseState> state)
{
	popState();
	pushState(std::move(state));
}
