#ifndef WIZARD_H
#define WIZARD_H

#include <time.h>
#include "character.h"
#include "wand.h"

class Wizard : public Character
{
public:
    Wizard(std::string name);
    Wand toverstok;

    //setters
    void SetHealth (int hp);
    void SetDamage (int dmg);
    void Sethealing (int heal);
    void SetBlock(int Block);

    //getters
    int GetHealth();
    int GetDamage();
    int GetHealing();
    int GetBlock();

    //destructor
    virtual ~Wizard();
};

#endif // WIZARD_H
