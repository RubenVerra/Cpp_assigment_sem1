#include <iostream>
#include <time.h>
#include "game.h"

using namespace std;

int main()
{

    Game *newWorld;
    newWorld = new Game();

    newWorld->ChooseChar();
    newWorld->GenerateEnemy();
    newWorld->PrintStats();
    newWorld->Play();

    delete newWorld;







    return 0;
}
