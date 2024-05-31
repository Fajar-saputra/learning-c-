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
#include "ManajerBarang.cpp"


void tampilkanSemuaBarang(const std::vector<unique_ptr<Prosesor>> &daftarBarang);

int main(int argc, char const *argv[])
{
    vector<unique_ptr<Prosesor>> daftarBarang;
    

    daftarBarang.push_back(make_unique<Prosesor>("intel core i9", 10, 10000000, 4, 11));
    daftarBarang.push_back(make_unique<Prosesor>("intel core i3", 31, 12500000, 3, 5));

    // auto AMD = make_unique<Prosesor>();
    // AMD->setNama("AMD Ryzen 9 3900X");
    // AMD->setStok(10);
    // AMD->setHarga(10000000);
    // daftarBarang.push_back(std::move(AMD));
    
    daftarBarang.push_back(make_unique<Prosesor>("AMD Sempron", 13, 14000000, 13, 13));
    
    // Penjual* penjual1 = new Penjual("tono", 31, 10, "bukittinggi", "081423456789");
    // // penjual1->cetakInfoPenjual();

    // Pembeli *pembeli1 = new Pembeli("randi", 2, "08336245531", "maninjau");
    // // pembeli1->cetakInfoPembeli();

    tampilkanSemuaBarang(daftarBarang);

    cout << endl;
    return 0;
}
