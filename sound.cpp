/*#include"Engine.h"
#include<SFML/Audio.hpp>
#include<iostream>

using namespace sf;

void Engine::sound()
{
    SoundBuffer Buffer;
    if(!Buffer.loadFromFile("/home/bil/Downloads/game.wav"))
    {
        std::cout<<"Error can't play sound"<<std::endl;
    }
    Sound sound;
    sound.setBuffer(Buffer);
    sound.setLoop(true);
    sound.setPitch(1.5f);
    sound.setVolume(75.f);
    sound.play();
}
*/
