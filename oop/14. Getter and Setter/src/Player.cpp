#include "Player.hpp"
#include <iostream>
#include <string>


Player::Player(const char* name)
{
    this->name = name;
    this->level = 1;
    this->exp = 0;
    this->attack = 100;
}

// Getter, artinya kita akan membuat attribute menjadi read only
std::string Player::getName(){
    return this->name;
}


// Setter, ini untuk write data ke class
void Player::addExp(int expValue)
{
    int maxExp = 100;
    this->exp += expValue;
    std::cout << "Exp ditambah : " << this->exp << std::endl;

    if (this->exp >= maxExp)
    {
        this->level++;
        this->attack += 100;
    }
    
}

void Player::display()
{
    std::cout << "\nName\t: " << this->name << std::endl;
    std::cout << "Level\t: " << this->level << std::endl;
    std::cout << "Exp\t: " << this->exp << std::endl;
    std::cout << "Power\t: " << this->attack << std::endl <<std::endl;
}