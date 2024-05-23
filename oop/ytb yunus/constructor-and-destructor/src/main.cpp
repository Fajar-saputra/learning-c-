#include <iostream>


#include "myClass/Barang.hpp"
#include "myClass/Penjual.hpp"
#include "myClass/Pembeli.hpp"

int main(int argc, char const *argv[])
{
    Barang barang1("minyak goreng", 20, 5000);
    Barang barang2("gula", 32, 2000);
    Barang barang3;

    // call method
    barang1.infoBarang();
    barang2.infoBarang();
    barang3.infoBarang();

    Penjual penjual1("tono", 31, 3, "bukittinggi");
    penjual1.cetakInfoPenjual();

    Pembeli pembeli1("ucup",452, "08383445531", "maninjau");
    pembeli1.infoPembeli();

    std::cout << std::endl;
    return 0;
}
