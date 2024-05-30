#include <iostream>
using namespace std;

#include "../include/myClass/Prosesor.hpp"
#include "../include/myClass/Ram.hpp"
#include "../include/myClass/Penjual.hpp"
#include "../include/myClass/Pembeli.hpp"

int main(int argc, char const *argv[])
{
    Prosesor* intelCore = new Prosesor("intel core i9 12900k", 10, 10000000, 12, 11, "intel core i9 12900k");
    intelCore->infoBarang();

    Prosesor* amdRyzen = new Prosesor("amd ryzen 9 3900x", 10, 10000000, 12, 11, "amd ryzen 9 3900x");
    amdRyzen->infoBarang();
    

    Penjual* penjual1 = new Penjual("tono", 31, 10, "bukittinggi", "081423456789");
    penjual1->cetakInfoPenjual();

    cout << penjual1->getNama() << endl;

    Pembeli *pembeli1 = new Pembeli("randi", 2, "08336245531", "maninjau");
    pembeli1->cetakInfoPembeli();

    cout << endl;
    return 0;
}
