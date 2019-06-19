#include "pch.h"
#include "Engine.h"

using namespace sf;

//All updates for all objects should go here
//Object Collision goes here 

void Engine::update(float dtAsSeconds)
{
	m_Wormie.update(dtAsSeconds);
}