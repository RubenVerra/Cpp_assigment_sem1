#ifndef KNIGHT_H
#define KNIGHT_H

#include <time.h>
#include "character.h"

class Knight : public Character
{
public:
    Knight(std::string name);

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
    virtual ~Knight();
};

#endif // KNIGHT_H
