#ifndef HEALER_H
#define HEALER_H
#include <time.h>
#include "character.h"
#include "wand.h"

class Healer : public Character
{
public:
    Healer(std::string name);
    void biograph(int age = 22, int length = 183, std::string origin = "netherlands", bool gender = 0);

    //setters
    void SetHealth (int hp);
    void SetDamage (int dmg);
    void Sethealing (int heal);
    void SetBlock(int Block);

    //destructor
    virtual ~Healer();



};

#endif // HEALER_H
