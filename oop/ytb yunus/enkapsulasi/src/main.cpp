#include <iostream>
using namespace std;

#include "../include/myClass/Prosesor.hpp"
#include "../include/myClass/Ram.hpp"
#include "../include/myClass/Penjual.hpp"
#include "../include/myClass/Pembeli.hpp"

int main(int argc, char const *argv[])
{
    Prosesor* intelCore = new Prosesor("Intel Core i7", 15, 5000000, 8, 10, "Intel Core i7-10700K");
    intelCore->infoBarang();

    

    cout << endl;
    return 0;
}
