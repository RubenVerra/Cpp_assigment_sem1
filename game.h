#ifndef GAME_H
#define GAME_H

#include<iostream>
#include<string>
#include "character.h"




class Game
{
public:
    Game();
    bool StartGame();
    void ChooseChar();
    void GenerateEnemy();
    void PrintStats();
    void Play();
    bool PlayAgain();

private:
    Character *Enemy = nullptr;
    Character *Player = nullptr;

};

#endif // GAME_H
