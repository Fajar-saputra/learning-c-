#include <iostream>
#include <string>
using namespace std;

class Player{
    public:
        string name;

        Player(const char*);
        void display();
        void setName(const char*);
        string getName();

};

int main(int argc, char const *argv[])
{
    Player* player1 = new Player("ucup");
    player1->display();

    cout << "Ini diambil : " << player1->getName() << endl;

    player1->setName("tutu");
    player1->display();


    return 0;
}

// Penjabaran method
Player::Player(const char* name)
{
    this->name = name;
}

void Player::display()
{
    cout << "Nama player : " << this->name << endl;
}

void Player::setName(const char* name){
    this->name = name;
}

string Player::getName()
{
    return this->name;
}