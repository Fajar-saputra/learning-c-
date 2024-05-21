#include "Weapon.hpp"

#include <string>
#include <iostream>

Weapon::Weapon(const char* name, double attackPower)
{
    this->name = name;
    this->attackPower = attackPower;
}

 void Weapon::showDisplay(){
     std::cout << "Weapon : " << this->name << " dan Attack : " << this->attackPower << std::endl;
 }