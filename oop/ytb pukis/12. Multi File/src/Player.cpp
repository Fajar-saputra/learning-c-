#include <iostream>
#include <string>
#include "Player.h"

// Penjabaran method
Player::Player(const char* name)
{
    this->name = name;
}

void Player::display()
{
    std::cout << "Nama player : " << this->name << std::endl;
}

void Player::setName(const char* name){
    this->name = name;
}

std::string Player::getName()
{
    return this->name;
}