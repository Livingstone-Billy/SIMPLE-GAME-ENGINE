#include"Engine.h"
#include <SFML/Graphics.hpp>

using namespace sf;

void Engine::input()
{
    //quit command
    if(Keyboard::isKeyPressed(Keyboard::Escape))
    {
        m_Window.close();
    }
    if(Keyboard::isKeyPressed(Keyboard::Left))
    {
        m_Bob.moveLeft();
    }
    else
    {
        m_Bob.stopLeft();
    }
    if(Keyboard::isKeyPressed(Keyboard::Right))
    {
        m_Bob.moveRight();
    }
    else
    {
        m_Bob.stopRight();
    }
    if(Keyboard::isKeyPressed(Keyboard::Up))
    {
        m_Bob.moveUp();
    }
    else
    {
        m_Bob.stopUp();
    }
    if(Keyboard::isKeyPressed(Keyboard::Down))
    {
        m_Bob.moveDown();
    }
    else
    {
        m_Bob.stopDown();
    }
}
