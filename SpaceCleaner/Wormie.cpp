#include "pch.h"
#include "Wormie.h"

Wormie::Wormie()
{
	// How fast does Wormie move?
	m_Speed = 400;

	// Associate a texture with the sprite
	m_Texture.loadFromFile("WormBoi.bmp");
	m_Sprite.setTexture(m_Texture);

	// Set starting position
	m_Position.x = 500;
	m_Position.y = 800;

}

// Make the private spite available to the draw() function
Sprite Wormie::getSprite()
{
	return m_Sprite;
}

void Wormie::moveUp()
{
	m_UpPressed = true;
}

void Wormie::moveDown()
{
	m_DownPressed = true;
}

void Wormie::moveLeft()
{
	m_LeftPressed = true;
}

void Wormie::moveRight()
{
	m_RightPressed = true;
}

void Wormie::stopUp()
{
	m_UpPressed = false;
}

void Wormie::stopDown()
{
	m_DownPressed = false;
}

void Wormie::stopLeft()
{
	m_LeftPressed = false;
}

void Wormie::stopRight()
{
	m_RightPressed = false;
}

// Move Wormie based on the input this frame,
// the time elapsed, and the speed
void Wormie::update(float elapsedTime)
{
	if (m_UpPressed)
	{
		m_Position.y -= m_Speed * elapsedTime;
	}

	if (m_DownPressed)
	{
		m_Position.y += m_Speed * elapsedTime;
	}

	if (m_RightPressed)
	{
		m_Position.x += m_Speed * elapsedTime;
	}

	if (m_LeftPressed)
	{
		m_Position.x -= m_Speed * elapsedTime;
	}

	// Now move the sprite to its new position
	m_Sprite.setPosition(m_Position);

}