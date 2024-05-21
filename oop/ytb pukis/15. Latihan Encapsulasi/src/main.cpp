#include <iostream>
#include <string>

#include "Player.hpp"
#include "Weapon.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Player* player1 = new Player("Sniper");
    Weapon* weapen1 = new Weapon("Senepan", 35);

    // implementasi setter untuk equip weapon
    player1->equipWeapon(weapen1);

    player1->showDisplay();
    return 0;
}
