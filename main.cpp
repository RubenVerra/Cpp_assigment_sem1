#include <iostream>
#include <time.h>
#include "character.h"
#include "wizard.h"
#include "knight.h"
#include "healer.h"
#include "wand.h"

using namespace std;

int main()
{
    srand(time (NULL));
    Character* a;
    Character* b;
    Character* c;

    std::cout << "created the following characters: " << std::endl;
    std::cout << std::endl;


    a = new Wizard("Harry Potter");
    b = new Knight("lancelot");
    c = new Healer("mercy");



    std::cout << "________________________________________________" << std::endl;
    std::cout << "stats of the characters: " << std::endl;
    std::cout << std::endl;

    //a->SetHealth(0);
    //b->SetHealth(0);
    //c->SetHealth(0);

    std::cout << "health van Wizard: " <<  a->GetHealth() << std::endl;
    std::cout << "health van Knight: " <<  b->GetHealth() << std::endl;
    std::cout << "health van healer: " <<  c->GetHealth() << std::endl;


    std::cout << std::endl;

    //a->SetDamage(0);
    //b->SetDamage(0);
    //c->SetDamage(0);

    std::cout << "damage van Wizard: " << a->GetDamage() << std::endl;
    std::cout << "damage van Knight: " << b->GetDamage() << std::endl;
    std::cout << "damage van Healer: " << c->GetDamage() << std::endl;


    std::cout << std::endl;

    //a->Sethealing(0);
    //b->Sethealing(0);
    //c->Sethealing(0);

    std::cout << "healing van Wizard: " << a->GetHealing() << std::endl;
    std::cout << "healing van Knight: " << b->GetHealing() << std::endl;
    std::cout << "healing van Healer: " << c->GetHealing() << std::endl;

    std::cout << "________________________________________________" << std::endl;

    //game
    if(a->GetHealth() > 0 && b->GetHealth() > 0 && c->GetHealth() > 0)
    {
        std::cout << "all characters are alive " << std::endl;
        std::cout << "let the game begin! " << std::endl;
        std::cout << "________________________________________________" << std::endl;
    }

    //vervanger voor std::cin
    //int x = rand() % 3;

    // std in werkt niet:
     int InputUser = 10;
    std::cout << "geef een waarde van 0 - 2" << std::endl;
    std::cout << " 0 -> knight vs wizard" << std::endl;
    std::cout << " 1 -> Knight vs Healer" << std::endl;
    std::cout << " 2 -> wizard vs Healer" << std::endl;
    std::cout << "waarde:";
   for(int i = InputUser; i < 0 || i > 2 ; )
        {
            std::cin >> InputUser;
            i = InputUser;
       }


    switch (InputUser)
    {
        case 0: // knight vs wizard
        {
            int hpWizard = a->GetHealth();
            int hpKnight = b->GetHealth();


            std::cout << "Knight vs Wizard!" <<  std::endl;
            std::cout << "________________________________________________" << std::endl;
            while (hpWizard > 0 && hpKnight > 0)
            {
                std::cout << "health Knight before attack: "<< hpKnight << std::endl;
                hpKnight = hpKnight - a->GetDamage();
                std::cout << "health Knight after attack: "<< hpKnight << std::endl;

                std::cout << "________________________________________________" << std::endl;

                std::cout << "health Wizard before attack: "<< hpWizard << std::endl;
                hpWizard = hpWizard - b->GetDamage();
                std::cout << "health Wizard after attack: "<< hpWizard << std::endl;
                std::cout << "________________________________________________" << std::endl;
            }

            if(hpWizard > hpKnight)
            {
                std::cout << "Wizard has won the fight " << std::endl;
            }

            else
            {
               std::cout << "Knight has won the fight " << std::endl;
            }
        }
        break;

        case 1: // knight vs healer
        {
            int hpKnight = b->GetHealth();
            int hpHealer = c->GetHealth();


            std::cout << "Knight vs Healer!" <<  std::endl;
            std::cout << "________________________________________________" << std::endl;
            while(hpHealer > 0 && hpKnight > 0)
            {
                if(hpHealer < 35)
                {
                    std::cout << "The healer had gained: "<< c->GetHealing() << "hp" << std::endl;
                    hpHealer = hpHealer + c->GetHealing();
                }

                    std::cout << "health Knight before attack: "<< hpKnight << std::endl;
                    hpKnight = hpKnight - c->GetDamage();
                    std::cout << "health Knight after attack: "<< hpKnight << std::endl;

                    std::cout << "________________________________________________" << std::endl;

                    std::cout << "health healer before attack: "<< hpHealer << std::endl;
                    hpHealer = hpHealer - b->GetDamage();
                    std::cout << "health healer after attack: "<< hpHealer << std::endl;

                    std::cout << "________________________________________________" << std::endl;

                }

                if(hpHealer > hpKnight)
                {
                    std::cout << "Healer has won the fight " << std::endl;
                }

                else
                {
                   std::cout << "Knight has won the fight " << std::endl;
                }
        }
        break;

        case 2: // healer vs Wizard
        {
            int hpHealer = c->GetHealth();
            int hpWizard = a->GetHealth();

            std::cout << "Healer vs Wizard!" <<  std::endl;
            std::cout << "________________________________________________" << std::endl;
            while(hpHealer > 0 && hpWizard > 0)
            {
                if(hpHealer < 35)
                {
                    std::cout << "The healer had gained: "<< c->GetHealing() << "hp" << std::endl;
                    hpHealer = hpHealer + c->GetHealing();
                }

                std::cout << "health Knight before attack: "<< hpWizard << std::endl;
                hpWizard = hpWizard - c->GetDamage();
                std::cout << "health Knight after attack: "<< hpWizard << std::endl;

                std::cout << "________________________________________________" << std::endl;

                std::cout << "health healer before attack: "<< hpHealer << std::endl;
                hpHealer = hpHealer - a->GetDamage();
                std::cout << "health healer after attack: "<< hpHealer << std::endl;

                std::cout << "________________________________________________" << std::endl;
            }

                if(hpHealer > hpWizard)
                {
                    std::cout << "Healer has won the fight " << std::endl;
                }

                else
                {
                   std::cout << "Knight has won the fight " << std::endl;
                }

        }
    }




    std::cout << "________________________________________________" << std::endl;


    delete a;
    delete b;
    delete c;


    return 0;
}
