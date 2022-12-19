#ifndef WIZARD_H
#define WIZARD_H

#include <time.h>
#include "character.h"
#include "wand.h"
namespace ruben
{
    class Wizard : public Character
    {
    public:
        Wizard(std::string name);
        void biograph(int age = 78, int length = 170, std::string origin = "england", bool gender = 1);

        Wand toverstok;

        //setters
        void SetHealth (int hp);
        void SetDamage (int dmg);
        void Sethealing (int heal);
        void SetBlock(int Block);

        //destructor
        virtual ~Wizard();
    };
}
#endif // WIZARD_H
