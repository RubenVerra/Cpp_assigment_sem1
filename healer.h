#ifndef HEALER_H
#define HEALER_H
#include <time.h>
#include "character.h"


class Healer : public Character
{
public:
    Healer(std::string name);

    //setters
    void SetHealth (int hp);
    void SetDamage (int dmg);
    void Sethealing (int heal);
    void SetBlock(int Block);

    //destructor
    virtual ~Healer();



};

#endif // HEALER_H
