#include "Bob.h"
#include<SFML/Graphics.hpp>

using namespace std;

Bob::Bob()
{
    // How fast does Bob move?
    m_Speed = 2000;

    // Associate a texture with the sprite
    m_Texture.loadFromFile("/home/bil/Downloads/bob.png");
    m_Sprite.setTexture(m_Texture);

    // Set the Bob's starting position
    m_Position.x = 300;
    m_Position.y = 500;

}

// Make the private sprite available to the draw() function
Sprite Bob::getSprite()
{
    return m_Sprite;
}

void Bob::moveLeft()
{
    m_LeftPressed = true;
}

void Bob::moveRight()
{
    m_RightPressed = true;
}

void Bob::moveUp()
{
    m_UpPressed = true;
}

void Bob::moveDown()
{
    m_DownPressed = true;
}

void Bob::stopLeft()
{
    m_LeftPressed = false;
}

void Bob::stopRight()
{
    m_RightPressed = false;
}

void Bob::stopUp()
{
    m_UpPressed = false;
}

void Bob::stopDown()
{
    m_DownPressed = false;
}
// Move Bob based on the input this frame,
// the time elapsed, and the speed
void Bob::update(float elapsedTime)
{
    if (m_RightPressed)
    {
        m_Position.x += m_Speed * elapsedTime;
    }

    if (m_LeftPressed)
    {
        m_Position.x -= m_Speed * elapsedTime;
    }
    if(m_UpPressed)
    {
        m_Position.y -= m_Speed * elapsedTime;
    }
    if(m_DownPressed)
    {
        m_Position.y += m_Speed * elapsedTime;
    }

    // Now move the sprite to its new position
    m_Sprite.setPosition(m_Position);
}
