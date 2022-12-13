#include <iostream>
#include <time.h>
#include "game.h"

using namespace std;

int main()
{

    Game *newWorld;
    newWorld = new Game();

    newWorld->Play();
    newWorld->ChooseChar();
    newWorld->GenerateEnemy();
    newWorld->PrintStats();

    delete newWorld;







    return 0;
}
