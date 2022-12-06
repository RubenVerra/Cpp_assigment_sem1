#ifndef CHARACTER_H
#define CHARACTER_H
#include<string>
#include<iostream>
#include <time.h>
#include "wand.h"

class Character
{
public:
    Character(std::string name);

    //setter
    virtual void SetHealth (int hp) = 0;
    virtual void SetDamage (int dmg) = 0;
    virtual void Sethealing (int heal) = 0;
    virtual void SetBlock(int Block) = 0;

    //getter
    virtual int GetHealth() = 0;
    virtual int GetDamage() = 0;
    virtual int GetHealing()= 0;
    virtual int GetBlock() = 0;

    //destructor
    virtual ~Character();

protected:
    std::string name;

    //health
    int hp;
    int Gethp;

    //damage
    int dmg;
    int Getdmg;

    //healing
    int heal;
    int GetHeal;

    //Block
    int Block;
    bool GetBLck;
};

#endif // CHARACTER_H
