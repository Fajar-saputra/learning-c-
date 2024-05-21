#include <iostream>
#include <string>
using namespace std;

class Contoh{
    public:
        string dataString;
        double dataDouble;
        double m_dataDoule;

        Contoh(const char* dataString, double dataDouble)
        {
            // Menggunakan namespace dari Class
            Contoh::dataString = dataString;

            // Menggunakan "This"
            this->dataDouble = dataDouble;


            // Menggunakan konvensi penamaan
            m_dataDoule = dataDouble;

        }

};

class Player{
    public:
        string name;
        double power;
        int health;

        Player(const char* name, double power)
        {
            Player::setNama(name);
            this->setPower(power);
        }

        void setNama(const char* name)
        {
            Player::name = name;
        }

        void setPower(double power)
        {
            this->power=power;
        }

        void setHealth(int);
};

void Player::setHealth(int health)
{
    this->health = health;
}

int main(int argc, char const *argv[])
{
    Contoh* object1 = new Contoh("object 1", .8546643);
    cout << object1->dataString << endl;
    cout << object1->dataDouble << endl;
    cout << object1->m_dataDoule << endl;


    Player* player1 = new Player("Otong", 87);
    cout<< player1->name <<endl;
    cout<< player1->power <<endl;
    player1->setHealth(25);
    cout<< player1->health <<endl;

    return 0;
}
