#include <iostream>
#include <string>

#include "Player.hpp"
#include "Weapon.hpp"

using namespace std;


int main(int argc, char const *argv[])
{
    Player *player1 = new Player("Sniper");
    Weapon *weapon1 = new Weapon("Senapan", 50);


    // implementasi setter untuk meng-equip weapon
    player1->equipWeapon(weapon1);

    player1->display();

    delete player1, weapon1;
    return 0;
}
