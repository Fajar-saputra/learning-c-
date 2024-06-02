#include <iostream>
#include <vector>
#include <memory>
#include <fstream>
using std::ofstream;
using std::ifstream;
using std::cout;
using std::endl;
using std::make_unique;
using std::unique_ptr;
using std::vector;

#include "../include/myClass/Prosesor.hpp"
#include "../include/myClass/Ram.hpp"
#include "../include/myClass/Penjual.hpp"
#include "../include/myClass/Pembeli.hpp"
// #include "ManajerBarang.cpp"


int main(int argc, char const *argv[])
{
    Ram* ram_1 = new Ram();
    ram_1->setNama("Sodimm DDR4");
    ram_1->setKapasitas(8);



    cout << endl;
    return 0;
}
