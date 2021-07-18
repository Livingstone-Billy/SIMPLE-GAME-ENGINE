#ifndef BOB_H
#define BOB_H
#include<SFML/Graphics.hpp>

using namespace sf;

class Bob
{
    public:
        Bob();
        // Send a copy of the sprite to main
        Sprite getSprite();

        // Move Bob in a specific direction
        void moveLeft();

        void moveRight();

        void moveUp();

        void moveDown();

        // Stop Bob moving in a specific direction
        void stopLeft();

        void stopRight();

        void stopUp();

        void stopDown();

        // We will call this function once every frame
        void update(float elapsedTime);

    private:
        // Where is Bob
        Vector2f m_Position;

        // Of course we will need a sprite
        Sprite m_Sprite;

        // And a texture
        Texture m_Texture;

        // Which direction(s) is the player currently moving in
        bool m_LeftPressed;
        bool m_RightPressed;
        bool m_UpPressed;
        bool m_DownPressed;

        // Bob's speed in pixels per second
        float m_Speed;
};

#endif // BOB_H
