#include <iostream>
#include <string>
using namespace std;

// Eksternal file
#include "Player.h"

int main(int argc, char const *argv[])
{
    Player* player1 = new Player("ucup");
    player1->display();

    cout << "Ini diambil : " << player1->getName() << endl;

    player1->setName("tutu");
    player1->display();


    return 0;
}

