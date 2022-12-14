#include "game.h"
//#include "character.h"
#include "wizard.h"
#include "knight.h"
#include "healer.h"

Duel::Game::Game()
{

}

bool Duel::Game::StartGame()
{
    int input;
    std::cout << " ------------------------------------ " << std::endl;
    std::cout << " Welcome to Duel!!" << std::endl;
    std::cout << " Press 1 to start" << std::endl;
    std::cout << " Press 0 to stop" << std::endl;
    std::cout << " ------------------------------------ " << std::endl;
    std::cin >> input;
    std::cout << " ------------------------------------ " << std::endl;
    while (input > 1 || input < 0 ) {
        std::cout << " Wrong input" << std::endl;
        std::cout << " try again" << std::endl;
        std::cout << " ------------------------------------ " << std::endl;
        std::cin >> input;
    }
    if(input)
    {
        return 1;
    }
    else
    {
        std::cout << " Goodbye" << std::endl;
        return 0;
    }
}

void Duel::Game::ChooseChar()
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
             std::cout<< " try again" << std::endl;
             std::cin >> InputUser;

        }
    std::cout << " ------------------------------------ " << std::endl;
    std::string newName;
    std::cout << " type the name of your hero: ";
    std::cin >> newName;

    if(InputUser == 1)
    {
        Player = new Wizard(newName);
    }
    else if(InputUser == 2)
    {
        Player = new Knight(newName);
    }
    else if(InputUser == 3)
    {
        Player = new Healer(newName);
    }
    else
    {
        std::cout << " something went wrong " << std::endl;
    }

}

void Duel::Game::GenerateEnemy()
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

void Duel::Game::PrintStats()
{
    std::cout << " stats of the characters: " << std::endl;
    std::cout << std::endl;

    std::cout << " health Player: " <<  Player->GetHealth() << std::endl;
    std::cout << " health Enemy: " <<  Enemy->GetHealth() << std::endl;

    std::cout << std::endl;

    std::cout << " damage van Player: " << Player->GetDamage() << std::endl;
    std::cout << " damage van Enemy: " << Enemy->GetDamage() << std::endl;

    std::cout << std::endl;

    std::cout << " healing van Player: " << Player->GetHealing() << std::endl;
    std::cout << " healing van Enemy: " << Enemy->GetHealing() << std::endl;

    std::cout << std::endl;

    std::cout << " block van Player: " << Player->GetBlock() << std::endl;
    std::cout << " block van Enemy: " << Enemy->GetBlock() << std::endl;
    std::cout << " ------------------------------------ " << std::endl;

    Player->biograph();
    Enemy->biograph();


    std::cout << std::endl;
}

void Duel::Game::Play()
{
    std::cout << " are you ready to play?" << std::endl;
    std::cout << " yes -> 1 " << std::endl;
    std::cout << " no  -> 2" << std::endl;
    std::cout << " ------------------------------------ " << std::endl;


    int InputUser = 0;
    std::cin >> InputUser;
    while(InputUser < 1  || InputUser > 2)
         {
             std::cout<< " try again" << std::endl;
             std::cin >> InputUser;
        }

    std::cout << " ------------------------------------ " << std::endl;

    if(InputUser == 1)
    {
        while(Player->IsAlive(Player->GetHealth()) && Enemy->IsAlive(Enemy->GetHealth()))
        {
            int ai = rand() % 3;
            InputUser = 0;
            std::cout << " What is your action?" << std::endl;
            std::cout << " 1: to attack" << std::endl;
            std::cout << " 2: to Heal" << std::endl;
            std::cout << " 3: to block" << std::endl;
            std::cout << " ------------------------------------ " << std::endl;
            std::cin >> InputUser;
            switch (InputUser) {
            case 1:
                std::cout << " You attack " << Enemy->getName() << std::endl;
                std::cout << "-" <<Player->GetDamage() << std::endl;
                Enemy->hit(Player->GetDamage());
                std::cout << " Your HP is: " << Player->GetHealth() << std::endl;
                std::cout << " ------------------------------------ " << std::endl;


                break;
            case 2:

                std::cout << " You Heal " << Player->GetHealing() << "HP" << std::endl;
                Player->heal(Player->GetHealing());
                std::cout << " Your HP is: " << Player->GetHealth() << std::endl;
                std::cout << " ------------------------------------ " << std::endl;
                break;
            case 3:
                std::cout << " You block " << Enemy->getName() << std::endl;
                if(ai == 0)
                {

                    std::cout << " Your HP is: " << Player->GetHealth() << std::endl;
                    Player->BlockAttack(Player->GetBlock(), Enemy->GetDamage());
                }
                else if(ai == 1 || ai == 2)
                {
                    Player->MissBlock(Player->GetBlock());
                    std::cout << " Your HP is: " << Player->GetHealth() << std::endl;
                }
                else
                {
                    std::cout << " something went wrong " << Enemy->GetHealth() << std::endl;
                }
                std::cout << " player has " << Player->GetBlock() << " blocks left" << std :: endl;
                std::cout << " ------------------------------------ " << std::endl;

                break;
                default:
                    std::cout << " player did something we didn't program" << std :: endl;
                    std::cout << " and lost his/her action" << std :: endl;
                    std::cout << " ------------------------------------ " << std::endl;
            }
            switch (ai) {
            case 0:
                std::cout << " " <<Enemy->getName() << " attacks you" << std::endl;
                std::cout << "-" <<Enemy->GetDamage() << std::endl;
                Player->hit(Enemy->GetDamage());               
                std::cout << " " <<Enemy->getName() << " HP is: " << Enemy->GetHealth() << std::endl;
                std::cout << " ------------------------------------ " << std::endl;

                break;
            case 1:
                std::cout << " " <<Enemy->getName() << " heals " << Enemy->GetHealing() << " HP" << std::endl;
                Enemy->heal(Enemy->GetHealing());
                std::cout << " " <<Enemy->getName() << " HP is: " << Enemy->GetHealth() << std::endl;
                std::cout << " ------------------------------------ " << std::endl;
                break;
            case 2:

                std::cout << " " <<Enemy->getName() << " blocks your attack" << std::endl;

                if(InputUser == 1)
                {
                    Enemy->BlockAttack(Enemy->GetBlock(), Player->GetDamage());
                    std::cout << " " <<Enemy->getName() << " HP is: " << Enemy->GetHealth() << std::endl;
                }
                else if(InputUser == 2 || InputUser == 3)
                {
                    Enemy->MissBlock(Enemy->GetBlock());
                    std::cout << " " << Enemy->getName() << " HP is: " << Enemy->GetHealth() << std::endl;
                }
                else
                {
                    std::cout << " something went wrong " << Enemy->GetHealth() << std::endl;
                }

                std::cout << " ------------------------------------ " << std::endl;
                break;
            }
            std::cout << " Your HP is: " << Player->GetHealth() << std::endl;
            std::cout << " ------------------------------------ " << std::endl;

        }
        if( Player->GetHealth() <= 0 )
        {
            std::cout <<" " << Player->getName() <<" has died!!!" << std::endl;
        }
        else if( Enemy->GetHealth() <= 0)
        {
            std::cout << " " <<Player->getName()<< " has won !! And your enemy has been killed !!!" << std::endl;
        }
        else if(Player->GetHealth() <= 0 && Enemy->GetHealth() <= 0)
        {
            std::cout <<" " << Player->getName()<< " and "<< Enemy->getName()<< " have slain each other" << std::endl;
        }

    }
    else if(InputUser == 2)
    {
        std::cout<< " goodbye" << std::endl;
        return;

    }
    else
    {
        std::cout<< " somthing went wrong" << std::endl;
        return;
    }

    delete Player;
    delete Enemy;

}

bool Duel::Game::PlayAgain()
{
    int inputUser;
    std::cout << " ------------------------------------ " << std::endl;
    std::cout << " Do you want to go again?" << std::endl;
    std::cout << " Press 1 to restart" << std::endl;
    std::cout << " Press 0 to stop" << std::endl;
    std::cout << " ------------------------------------ " << std::endl;
    std::cin >> inputUser;
    std::cout << " ------------------------------------ " << std::endl;
    while (inputUser > 1 || inputUser < 0 ) {
        std::cout << " Wrong input" << std::endl;
        std::cout << " try again" << std::endl;
        std::cout << " ------------------------------------ " << std::endl;
        std::cin >> inputUser;
    }
    if(inputUser)
    {
        return 1;
    }else
    std::cout << " Goodbye" << std::endl;
    return 0;
}


