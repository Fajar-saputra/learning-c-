#include <iostream>
#include <string>

using namespace std;

#include "Hero.hpp"

int main(int argc, char const *argv[])
{
    Hero *hero1 = new Hero(); // Heap
    hero1->display();

    Hero hero2 = Hero("Ucup", "130"); // Stack
    hero2.display();

    Hero *hero3 = new Hero("Tono","150","240");
    hero3->display();

    return 0;
}
