#include <string>
#include <iostream>
using namespace std;

#include "Player.hpp"

int main(int argc, char const *argv[])
{
    Player* player1 = new Player("Otong");
    player1->display();

    player1->addExp(32);
    player1->addExp(45);
    player1->addExp(53);
    player1->addExp(82);
    player1->addExp(90);
    player1->addExp(99);
    
    player1->display();
    return 0;
}
