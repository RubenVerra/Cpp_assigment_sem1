#include "game.h"
//#include "character.h"
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


    if(InputUser == 1)
    {
        Player = new Wizard("Harry Potter");
    }
    else if(InputUser == 2)
    {
        Player = new Knight("Lancelot");
    }
    else if(InputUser == 3)
    {
        Player = new Healer("Mercy");
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


    if(x == 0)
    {
        Enemy = new Wizard("Voldemort");
    }
    else if(x == 1)
    {
        Enemy = new Knight("DarkKnight");
    }
    else if(x == 2)
    {
        Enemy = new Healer("Moira");
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

    std::cout << " ------------------------------------ " << std::endl;

    if(InputUser == 1)
    {
        bool getHit = 0;
        while(Player->GetHealth() > 0 && Enemy->GetHealth() > 0)
        {
            int ai = rand() % 3;
            if( Player->GetHealth() <= 0 || Enemy->GetHealth() <= 0 )//! Enemy->hit(Player->GetDamage())
                {
                  std::cout << "DEAD !!!" << std::endl;
                  break;
                }
            InputUser = 0;
            std::cout << "What is your action?" << std::endl;
            std::cout << "1: to attack" << std::endl;
            std::cout << "2: to Heal" << std::endl;
            std::cout << "3: to block" << std::endl;
            std::cout << " ------------------------------------ " << std::endl;
            std::cin >> InputUser;
            switch (InputUser) {
            case 1:
                std::cout << "You attack " << Enemy->getName() << std::endl;
                std::cout << "-" <<Player->GetDamage() << std::endl;
                Enemy->hit(Player->GetDamage());
                std::cout << "Your HP is: " << Player->GetHealth() << std::endl;
                std::cout << " ------------------------------------ " << std::endl;


                break;
            case 2:

                std::cout << "You Heal " << Player->GetHealing() << "HP" << std::endl;
                Player->heal(Player->GetHealing());
                std::cout << "Your HP is: " << Player->GetHealth() << std::endl;
                std::cout << " ------------------------------------ " << std::endl;
                break;
            case 3:
                std::cout << "You block " << Enemy->getName() << std::endl;
                if(ai == 0)
                {

                    std::cout << "Your HP is: " << Player->GetHealth() << std::endl;
                    Player->BlockAttack(Player->GetBlock(), Enemy->GetDamage());
                }
                else if(ai == 1 || ai == 2)
                {
                    Player->MissBlock(Player->GetBlock());
                    std::cout << "Your HP is: " << Player->GetHealth() << std::endl;
                }
                else
                {
                    std::cout << " something went wrong " << Enemy->GetHealth() << std::endl;
                }
                std::cout << "player has " << Player->GetBlock() << " blocks left" << std :: endl;
                std::cout << " ------------------------------------ " << std::endl;

                break;
            }
            switch (ai) {
            case 0:
                std::cout << Enemy->getName() << " attacks you" << std::endl;
                std::cout << "-" <<Enemy->GetDamage() << std::endl;
                Player->hit(Enemy->GetDamage());               
                std::cout << Enemy->getName() << " HP is: " << Enemy->GetHealth() << std::endl;
                std::cout << " ------------------------------------ " << std::endl;

                break;
            case 1:
                std::cout << Enemy->getName() << " heals " << Enemy->GetHealing() << " HP" << std::endl;
                Enemy->heal(Enemy->GetHealing());
                std::cout << Enemy->getName() << " HP is: " << Enemy->GetHealth() << std::endl;
                std::cout << " ------------------------------------ " << std::endl;
                break;
            case 2:

                std::cout << Enemy->getName() << " blocks your attack" << std::endl;

                if(InputUser == 1)
                {
                    Enemy->BlockAttack(Enemy->GetBlock(), Player->GetDamage());
                    std::cout << Enemy->getName() << " HP is: " << Enemy->GetHealth() << std::endl;
                }
                else if(InputUser == 2 || InputUser == 3)
                {
                    Enemy->MissBlock(Enemy->GetBlock());
                    std::cout << Enemy->getName() << " HP is: " << Enemy->GetHealth() << std::endl;
                }
                else
                {
                    std::cout << " something went wrong " << Enemy->GetHealth() << std::endl;
                }

                std::cout << " ------------------------------------ " << std::endl;
                break;
            }
            std::cout << "Your HP is: " << Player->GetHealth() << std::endl;
            std::cout << " ------------------------------------ " << std::endl;

        }

    }
    else if(InputUser == 2)
    {
        std::cout<< "abort game!" << std::endl;
        return;

    }
    else
    {
        std::cout<< "somthing went wrong" << std::endl;
        return;
    }

}


