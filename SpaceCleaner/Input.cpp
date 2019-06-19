#include "pch.h"
#include "Engine.h"

void Engine::input()
{
	// Handle the player quitting
	if (Keyboard::isKeyPressed(Keyboard::Escape))
	{
		m_Window.close();
	}

	// Handle the player moving
	if (Keyboard::isKeyPressed(Keyboard::W))
	{
		m_Wormie.moveUp();
	}
	else
	{
		m_Wormie.stopUp();
	}

	if (Keyboard::isKeyPressed(Keyboard::S))
	{
		m_Wormie.moveDown();
	}
	else
	{
		m_Wormie.stopDown();
	}

	if (Keyboard::isKeyPressed(Keyboard::A))
	{
		m_Wormie.moveLeft();
	}
	else
	{
		m_Wormie.stopLeft();
	}

	if (Keyboard::isKeyPressed(Keyboard::D))
	{
		m_Wormie.moveRight();
	}
	else
	{
		m_Wormie.stopRight();
	}

}