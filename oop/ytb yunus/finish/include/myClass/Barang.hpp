// include guard
#ifndef BARANG_HPP
#define BARANG_HPP

#include <iostream>
#include <string>

class Barang {
private:
    std::string m_namaBarang;
    int m_stokBarang;
    int m_hargaBarang;

public:
    // Constructor
    Barang(std::string m_namaBarang = "no name", int stokBarang = 0, int hargaBarang = 0);

    // Destructor
    ~Barang();

    // setter
    void setNama(std::string m_namaBarang);
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

