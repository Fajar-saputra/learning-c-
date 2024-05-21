#ifndef __WEAPON
#define __WEAPON

#include <string>

class Weapon{
    private:
        std::string name;
        double attackPower;

    public:
        Weapon(const char *, double);

        void showDisplay();
};

#endif