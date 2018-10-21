#include <iostream>
#include <vector>

using namespace std;

class Item {
public:
    void use() {
        cout << "Item used." << endl;
    };
};


class MagicCreature : public Creature {
private:
    int mp;
public:
    MagicCreature(int mp, int hp, int baseDamage, string name) : Creature(hp, baseDamage, name) {
        this->mp = mp;
    }
    void magicAttack(Creature& target) {
        target.setHp(target.getHp() - mp);
    }

    int getMp() {
        return mp;
    }

    void setMp(int newMp) {
        mp = newMp;
        if(mp < 0) {
            mp = 0;
        }
    }
};

int main()
{
    Creature a(11, 11, "Jorah");
    Creature b(10, 10, "Jaqen");
    MagicCreature c(13, 10, 10, "Daenerys");
    a.introduce();
    b.introduce();
    c.introduce();
    Item i1;
    Item i2;

    a.inventory.push_back(&i1);
    a.inventory.push_back(&i2);

    a.inventory[0]->use();

    a.attack(b);
    if(b.isAlive()) {
        cout << "Still alive, fool!" << endl;
    }
    else {
        cout << "I died... This cannot be..." << endl;
    }
    return 0;
}
