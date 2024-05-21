#ifndef __PLAYER
#define __PLAYER

#include <string>
#include <iostream>

class Player{
    private:
        std::string name;
        double attack;
        int level;
        int exp;

    public:
        Player(const char*);

        // Getter, artinya kita akan membuat attribute menjadi read only
        std::string getName();

        // Setter, ini untuk write data ke class
        void addExp(int expValue);

        void display();
};

#endif