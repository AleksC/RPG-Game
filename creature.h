#ifndef CREATURE_H_INCLUDED
#define CREATURE_H_INCLUDED

#include <vector>

#include "item.h"

using namespace std;

class Creature {
private:
    int hp;
    int baseDamage;
    string name;

public:
    vector<Item*> inventory;
    Creature(int, int, string);
    int getHp();
    void setHp(int);
    int getBaseDamage();
    void setBaseDamage(int);
    string getName();
    void setName(string);
};


#endif // CREATURE_H_INCLUDED
