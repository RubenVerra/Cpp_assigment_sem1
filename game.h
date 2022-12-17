#ifndef GAME_H
#define GAME_H

#include<iostream>
#include<string>
#include "character.h"




class Game
{
public:
    Game();

    void ChooseChar();
    void GenerateEnemy();


    void PrintStats();
    void Play();

private:
    Character *Enemy = nullptr;
    Character *Player = nullptr;

};

#endif // GAME_H
