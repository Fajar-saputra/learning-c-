#include <iostream>

#include "myClass/Barang.hpp"
#include "myClass/Penjual.hpp"
#include "myClass/Pembeli.hpp"

int main(int argc, char const *argv[])
{
    Barang barang1;
    // access to property
    barang1.m_nama = "sabun";
    barang1.m_hargaBarang = 5000;
    barang1.m_stokBarang = 30;
    
    
    Barang barang2;
    // access to property
    barang2.m_nama = "shampo";
    barang2.m_hargaBarang = 2000;
    barang2.m_stokBarang = 50;

    // call method
    // barang1.tambahBarang(45);
    // barang1.kurangiBarang(50);
    // barang1.cekBarang();
    barang1.infoBarang();
    barang2.infoBarang();

    Penjual penjual1;
    penjual1.m_nama = "otong";
    penjual1.m_umur = 28;
    penjual1.m_lamaKerja = 4;
    penjual1.m_alamat = "padang";
    penjual1.cetakInfoPenjual();

    Pembeli pembeli1;
    pembeli1.m_nama = "ucup";
    pembeli1.m_noTlp = "08383445531";
    pembeli1.m_jumlahBeli = 34;
    pembeli1.m_alamat = "maninjau";
    pembeli1.infoPembeli();

    std::cout << std::endl;
    return 0;
}
