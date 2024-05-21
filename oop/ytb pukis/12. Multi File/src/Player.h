#ifndef __PLAYER
#define __PLAYER

#include <iostream>

class Player{
    public:
        std::string name;

        Player(const char*);
        void display();
        void setName(const char*);
        std::string getName();

};

#endif