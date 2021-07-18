#include "Engine.h"
#include<SFML/Graphics.hpp>

using namespace sf;

Engine::Engine()
{
    Vector2f resolution;
    resolution.x = VideoMode::getDesktopMode().width;
    resolution.y = VideoMode::getDesktopMode().height;

    m_Window.create(VideoMode(resolution.x,resolution.y),"PLAY ENGINE",Style::Default);

    m_BackgroundTexture.loadFromFile("/home/bil/Downloads/realback.jpg");

    Vector2u windowSize;
    Vector2u textureSize;

    windowSize = m_Window.getSize();
    textureSize = m_BackgroundTexture.getSize();

    float ScaleX = (float) windowSize.x / textureSize.x;
    float ScaleY = (float) windowSize.y / textureSize.y;

    m_BackgroundSprite.setScale(ScaleX,ScaleY);
    m_BackgroundSprite.setTexture(m_BackgroundTexture);
}

void Engine::start()
{
    Clock clock;
    while(m_Window.isOpen())
    {
        Time dt = clock.restart();
        float dtAsSeconds = dt.asSeconds();
        input();
        update(dtAsSeconds);
        //sound();
        draw();
    }
}
