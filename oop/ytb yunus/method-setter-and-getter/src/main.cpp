#include <iostream>
using namespace std;

#include "myClass/Barang.hpp"
#include "myClass/Penjual.hpp"
#include "myClass/Pembeli.hpp"

int main(int argc, char const *argv[])
{
    Barang barang1("minyak goreng", 20, 5000);
    barang1.infoBarang();

    Barang barang2("gula", 32, 2000);
    barang2.infoBarang();

    
    Barang barang3;
    barang3.infoBarang();

    Penjual penjual1;
    penjual1.setNama("tono");
    penjual1.setUmur(31);
    penjual1.setNoTelp("081423456789");
    penjual1.setAlamat("bukittinggi");
    penjual1.cetakInfoPenjual();

    cout << penjual1.getNama() << endl;

    Pembeli pembeli1("ucup", 452, "08383445531", "maninjau");
    pembeli1.setNama("dadi");
    pembeli1.setJumlahBeli(32);
    pembeli1.setNoTlp("08336245531");
    pembeli1.setAlamat("maninjau");
    pembeli1.cetakInfoPembeli();

    cout << endl;
    return 0;
}
