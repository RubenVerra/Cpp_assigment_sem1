#include <iostream>
#include <time.h>
#include "game.h"

using namespace std;

int main()
{

    Game *newWorld;
    newWorld = new Game();
    bool input;
    std::cout << " ------------------------------------ " << std::endl;
    std::cout << "Welcome to Duel!!" << std::endl;
    std::cout << "Press 1 to start" << std::endl;
    std::cout << "Press 0 to stop" << std::endl;
    std::cout << " ------------------------------------ " << std::endl;
    std::cin >> input;
    std::cout << " ------------------------------------ " << std::endl;

    while (input)
    {
        newWorld->ChooseChar();
        newWorld->GenerateEnemy();
        newWorld->PrintStats();
        newWorld->Play();
        std::cout << " ------------------------------------ " << std::endl;
        std::cout << "Do you want to go again?" << std::endl;
        std::cout << "Press 1 to restart" << std::endl;
        std::cout << "Press 0 to stop" << std::endl;
        std::cout << " ------------------------------------ " << std::endl;
        std::cin >> input;
        std::cout << " ------------------------------------ " << std::endl;
    }
    std::cout << "Goodbye" << std::endl;

    delete newWorld;

    return 0;
}
