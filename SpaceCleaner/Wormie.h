#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Wormie
{
	// All the private variables can only be accessed internally
private:

	// Where is Wormie
	Vector2f m_Position;

	// Wormie needs a sprite
	Sprite m_Sprite;

	// And a texture
	Texture m_Texture;

	// Which direction(s) is the player currently moving in
	bool m_UpPressed;
	bool m_DownPressed;
	bool m_LeftPressed;
	bool m_RightPressed;

	// pixels per second
	float m_Speed;

	// Public functions
public:

	// constructor
	Wormie();

	// Send a copy of the sprite to main
	Sprite getSprite();

	// Move
	void moveUp();

	void moveDown();

	void moveLeft();

	void moveRight();

	// Stop
	void stopUp();

	void stopDown();

	void stopLeft();

	void stopRight();

	// Calling function once every frame
	void update(float elapsedTime);

};
