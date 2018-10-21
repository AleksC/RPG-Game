#include "creature.h"


Creature::Creature(int hp, int baseDamage, string name) {
        this->hp = hp;
        this->baseDamage = baseDamage;
        this->name = name;
}
int Creature::getHp() {
    return hp;
}
void Creature::setHp(int newHp) {
    hp = newHp;
    if(hp < 0) {
        hp = 0;
    }
}
int Creature::getBaseDamage() {
    return baseDamage;
}
void Creature::setBaseDamage(int newBaseDamage) {
    baseDamage = newBaseDamage;
    if(baseDamage < 0) {
        baseDamage = 0;
    }
}
string Creature::getName() {
    return name;
}
void Creature::setName(string newName) {
    name = newName;
}

bool Creature::isAlive() {
    if(hp < 1) {
        return false;
    }
    return true;
}

void Creature::attack(Creature& other) {
    other.setHp(other.getHp() - baseDamage);
}

void Creature::introduce() {
    cout << "Hello, I'm " + name + "." << endl;
}
