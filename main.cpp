#include <iostream>
#include <time.h>
#include "game.h"

using namespace std;

int main()
{

    Game *newWorld;
    newWorld = new Game();
    bool input;
    input = newWorld->StartGame();
    while (input) {
        newWorld->ChooseChar();
        newWorld->GenerateEnemy();
        newWorld->PrintStats();
        newWorld->Play();
        input = newWorld->PlayAgain();
    }
    std::cout << "Goodbye" << std::endl;

    delete newWorld;

    return 0;
}
