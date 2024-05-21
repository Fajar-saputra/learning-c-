#ifndef __HERO
#define __HERO

#include <iostream>
#include <string>

class Hero{
    private:
        std::string name;
        std::string health;
        std::string attack;

    public:
    // default assigment
    Hero(const char* name = "Player", const char* health = "default", const char* attack = "default"){
        this->name = name;
        this->health = health;
        this->attack = attack;
    }

    void display()
    {
        std::cout << "\nPlayer name  : " << this->name << std::endl;
        std::cout << "Player health: " << this->health << std::endl;
        std::cout << "Player attack: " << this->attack << std::endl << std::endl;
    }
};


#endif