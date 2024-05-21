#include "Player.hpp"

#include <string>
#include <iostream>

Player::Player(const char* name){
    this->name = name;
}

void Player::showDisplay()
{
    std::cout << "Nama   : " << this->name << std::endl;
    this->weapon->showDisplay();
}

void Player::equipWeapon(Weapon *weapon){
    this->weapon = weapon;
}