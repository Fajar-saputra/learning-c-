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
    void setStok(std::size_t stokBarang);
    void setHarga(std::size_t hargaBarang);

    // getter
    std::string getNama() const;
    int getStok() const;
    int getHarga() const;

    // Methods
    void tambahBarang(std::size_t jmlBarang);
    void kurangiBarang(std::size_t barang);
    void jualBarang(std::size_t jumlah);
    void cekBarang();
    void cetakBarang();
};

#endif // BARANG_HPP

