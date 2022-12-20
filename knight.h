#ifndef KNIGHT_H
#define KNIGHT_H

#include <time.h>
#include "character.h"
namespace Duel
{
    class Knight : public Character
    {
    public:
        Knight(std::string name);
        void biograph(int age = 37, int length = 189, std::string origin = "germany", bool gender = 1);


        //setters
        void SetHealth (int hp);
        void SetDamage (int dmg);
        void Sethealing (int heal);
        void SetBlock(int Block);

        //destructor
        virtual ~Knight();
    };
}
#endif // KNIGHT_H
