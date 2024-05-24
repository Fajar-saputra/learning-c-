#include <iostream>
using namespace std;

#include "myClass/Prosesor.hpp"
#include "myClass/Penjual.hpp"
#include "myClass/Pembeli.hpp"

int main(int argc, char const *argv[])
{
    Prosesor intelCore;
    intelCore.setNama("intel core i9 12900k");
    intelCore.setStok(10);
    intelCore.setHarga(10000000);
    intelCore.setCoreI(12);
    intelCore.setGenerasi(11);
    intelCore.setNamaProsesor("intel core i9 12900k");
    intelCore.infoBarang();

    Prosesor amdRyzen;
    amdRyzen.setNama("amd ryzen 9 3900x");
    amdRyzen.setStok(10);
    amdRyzen.setHarga(10000000);
    amdRyzen.setCoreI(12);
    amdRyzen.setGenerasi(11);
    amdRyzen.setNamaProsesor("amd ryzen 9 3900x");
    amdRyzen.infoBarang();

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
    pembeli1.setNoTelp("08336245531");
    pembeli1.setAlamat("maninjau");
    pembeli1.cetakInfoPembeli();

    cout << endl;
    return 0;
}
