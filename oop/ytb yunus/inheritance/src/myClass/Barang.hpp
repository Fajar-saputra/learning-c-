#include <iostream>
#include <string>

class Barang {
private:
    std::string m_nama;
    int m_stokBarang;
    int m_hargaBarang;

public:
    // Constructor
    Barang(std::string nama = "no name", int stokBarang = 0, int hargaBarang = 0)
        : m_nama(nama), m_stokBarang(stokBarang), m_hargaBarang(hargaBarang) {}

    // Destructor
    ~Barang() {
        std::cout << "Destructor called for " << m_nama << std::endl;
    }

    // setter
    void setNama(std::string nama){
        m_nama = nama;
    }
    void setStok(int stokBarang){
        m_stokBarang = stokBarang;
    }
    void setHarga(int hargaBarang){
        m_hargaBarang = hargaBarang;
    }

    // getter
    std::string getNama() const {
        return m_nama;
    }
    int getStok() const {
        return m_stokBarang;
    }
    int getHarga() const {
        return m_hargaBarang;
    }

    // Methods
    void tambahBarang(int jmlBarang) {
        m_stokBarang += jmlBarang;
        std::cout << "Stok berhasil ditambahkan jumlah : " << m_stokBarang << std::endl;
    }

    void kurangiBarang(int barang) {
        if (barang > m_stokBarang) {
            std::cout << "Pengurangan melebihi stok yang ada!" << std::endl;
            return;
        }
        m_stokBarang -= barang;
        std::cout << "Stok berhasil dikurangi jumlah : " << m_stokBarang << std::endl;
    }

    void jualBarang(int jumlah) {
        if (jumlah > m_stokBarang) {
            std::cout << "Penjualan melebihi stok yang ada!" << std::endl;
        } else {
            kurangiBarang(jumlah);
            std::cout << "Penjualan berhasil, " << jumlah << " barang terjual." << std::endl;
        }
    }

    void cekBarang() {
        std::cout << (m_stokBarang > 0 ? "barang ada" : "barang kosong") << std::endl;
    }

    

};