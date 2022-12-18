#ifndef CHARACTER_H
#define CHARACTER_H
#include<string>
#include<iostream>
#include <time.h>
class Character
{
public:
    Character(std::string name);
    //destructor
    virtual ~Character();

    //setter
    virtual std::string setName(const std::string &newName);

    // randomly generates the amount of: health, Damage, healing and blocks of the character.
    virtual void SetHealth (int hp) = 0;
    virtual void SetDamage (int dmg) = 0;
    virtual void Sethealing (int heal) = 0;
    virtual void SetBlock(int Block) = 0;


    //getter
    // makes it possible to call the value of the functions above.
    std::string &getName()     {return name;}
    int GetHealth()            {return hp;}
    int GetDamage()            {return dmg;}
    int GetHealing()           {return GetHeal;}
    int GetBlock()             {return GetBLck;}

    bool IsAlive(int hp);

    // makes it possible to: attack, heal or block
    int hit(int damage);
    int heal(int hitpoints);
    int BlockAttack(int block, int damage);
    int MissBlock (int block);

protected:
    std::string name;

    // holds the value of health each character has
    int hp;
    //int Gethp;

    // holds the value of damage each character can do
    int dmg;
    //int Getdmg;

    // holds the value of how much each character can heal
    int GetHeal;

    // holds the amount of blocks each character has
    //int Block;
    int GetBLck;

    // checks if character is alive
    bool alive = 1;

    //cheks if character has won
    bool win = 0;

};

#endif // CHARACTER_H
