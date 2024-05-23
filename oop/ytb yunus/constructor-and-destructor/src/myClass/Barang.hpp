#include <iostream>
#include <string>

class Barang {
public:
    // property / attribute
    std::string m_nama;
    int m_stokBarang;
    int m_hargaBarang;

    // constructor
    Barang(std::string nama = "no name", int stokBarang = 0, int hargaBarang = 0)
    : m_nama(nama), m_stokBarang(stokBarang), m_hargaBarang(hargaBarang) {}

    // Destructor
    ~Barang() {
        std::cout << "sudah selesai menggunakan objek!" << std::endl;
    }

    // method / behavior
    void tambahBarang(int jmlBarang) {
        m_stokBarang += jmlBarang;
        std::cout << "Stok berhasil ditambahkan jumlah : " << m_stokBarang << std::endl;
    }

    void kurangiBarang(int barang) {
        m_stokBarang -= barang;
        std::cout << "Stok berhasil dikurangi jumlah : " << m_stokBarang << std::endl;
    }

    void cekBarang() {
        std::cout << (m_stokBarang > 0 ? "barang ada" : "barang kosong") << std::endl;
    }

    void infoBarang() {
        std::cout << "Nama Barang : " << m_nama << std::endl
             << "Stok Barang : " << m_stokBarang << std::endl
             << "Harga Barang: " << m_hargaBarang << std::endl << std::endl;
    }
};
