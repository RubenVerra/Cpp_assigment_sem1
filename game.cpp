#include "game.h"
#include "character.h"
#include "wizard.h"
#include "knight.h"
#include "healer.h"


Game::Game()
{

}

void Game::ChooseChar()
{
    std::cout << " Choose a character: " << std::endl;
    std::cout << " *Wizard -> 1 " << std::endl;
    std::cout << " *Knight -> 2" << std::endl;
    std::cout << " *Healer -> 3" << std::endl;
    std::cout << " ------------------------------------ " << std::endl;
    std::cout << std::endl;

    int InputUser = 0;

    std::cin >> InputUser;
    while( InputUser < 1 || InputUser > 3)
         {
             std::cout<< "try again" << std::endl;
             std::cin >> InputUser;

        }
    std::cout << " ------------------------------------ " << std::endl;


    Character* Player;
    if(InputUser == 1)
        {
            Player = new Wizard("Harry Potter");
            std::cout << " you are -> Wizard " << std::endl;

        }
    else if(InputUser == 2)
        {
            Player = new Knight("Lancelot");
            std::cout << " you are -> Knight " << std::endl;

        }
    else if(InputUser == 3)
        {
            Player = new Healer("Mercy");
            std::cout << " you are -> Healer " << std::endl;
        }
    else
        {
            std::cout << "something went wrong " << std::endl;
        }

}

void Game::GenerateEnemy()
{
    srand(time (NULL));

    int x = rand() % 3 ;


    Character *Enemy;

    if(x == 0)
    {
        Enemy = new Wizard("Voldemort");
        std::cout << " <Enemy is -> Wizard " << std::endl;
    }
    else if(x == 1)
    {
        Enemy = new Knight("DarkKnight");
        std::cout << " <Enemy is -> Knight " << std::endl;

    }
    else if(x == 2)
    {
        Enemy = new Healer("Moira");
        std::cout << " <Enemy is -> Healer " << std::endl;

    }
    else
    {
        std::cout << " somthing went wrong " << std::endl;
    }
}

void Game::PrintStats()
{
    std::cout << "stats of the characters: " << std::endl;
    std::cout << std::endl;

    std::cout << "health player: " <<  Player->GetHealth() << std::endl;
    std::cout << "health Enemy: " <<  Enemy->GetHealth() << std::endl;

    std::cout << std::endl;

    std::cout << "damage van PLayer: " << Player->GetDamage() << std::endl;
    std::cout << "damage van Enemy: " << Enemy->GetDamage() << std::endl;

    std::cout << std::endl;

    std::cout << "healing van Player: " << Player->GetHealing() << std::endl;
    std::cout << "healing van Enemy: " << Enemy->GetHealing() << std::endl;

    std::cout << std::endl;

    std::cout << "block van Player: " << Player->GetBlock() << std::endl;
    std::cout << "block van Enemy: " << Enemy->GetBlock() << std::endl;

    std::cout << std::endl;
}

void Game::Play()
{
    std::cout << "are you ready to play?" << std::endl;
    std::cout << " yes -> 1 " << std::endl;
    std::cout << " no  -> 2" << std::endl;
    std::cout << " ------------------------------------ " << std::endl;


    int InputUser = 0;
    std::cin >> InputUser;
    while(InputUser < 1  || InputUser > 2)
         {
             std::cout<< "try again" << std::endl;
             std::cin >> InputUser;
        }
    if(InputUser == 1)
    {

    }
    else if(InputUser == 2)
    {
        std::cout<< "abort game!" << std::endl;

    }
    else
    {
        std::cout<< "somthing went wrong" << std::endl;
    }

}


