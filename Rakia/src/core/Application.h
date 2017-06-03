#pragma once

#include "Framework.h"
#include "states\BaseState.h"

#include <memory>
#include <stack>

class Application
{
public:
	Application();
	~Application();

	void init();
	void run();

	void pushState(std::unique_ptr<BaseState> state);
	void popState();
	void changeState(std::unique_ptr<BaseState>state);

private:
	Framework m_framework;
	std::stack<std::unique_ptr<BaseState>>m_states;

};

