// include guard
#ifndef BARANG_HPP
#define BARANG_HPP

#include <iostream>
#include <string>

class Barang {
private:
    std::string m_nama;
    int m_stokBarang;
    int m_hargaBarang;

protected:
    // Constructor 
    // explicit Barang(const std::string& nama = "no name", int stokBarang = 0, int hargaBarang = 0);
     Barang(const std::string& nama = "no name", int stokBarang = 0, int hargaBarang = 0);

    // Destructor
    virtual ~Barang();

    // setter
    void setNama(const std::string& nama);
    void setStok(int stokBarang);
    void setHarga(int hargaBarang);

    // getter
    const std::string& getNama() const;
    int getStok() const;
    int getHarga() const;

    // Methods
    void tambahBarang(int jmlBarang);
    void kurangiBarang(int barang);
    void jualBarang(int jumlah);
    void cekBarang() const;
    void cetakBarang() const;
};

#endif // BARANG_HPP

