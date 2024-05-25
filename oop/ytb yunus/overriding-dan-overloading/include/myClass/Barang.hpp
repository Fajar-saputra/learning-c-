// include guard
#ifndef BARANG_HPP
#define BARANG_HPP

#include <iostream>
#include <string>

class Barang {
public:
    std::string m_nama;
    int m_stokBarang;
    int m_hargaBarang;

    // Constructor
    Barang(std::string nama = "no name", int stokBarang = 0, int hargaBarang = 0);

    // Destructor
    ~Barang();

    // setter
    void setNama(std::string nama);
    void setStok(int stokBarang);
    void setHarga(int hargaBarang);

    // getter
    std::string getNama() const;
    int getStok() const;
    int getHarga() const;

    // Methods
    void tambahBarang(int jmlBarang);
    void kurangiBarang(int barang);
    void jualBarang(int jumlah);
    void cekBarang();
    void cetakBarang();
};

#endif // BARANG_HPP

