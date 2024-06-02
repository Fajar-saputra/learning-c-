#include "../include/myClass/Barang.hpp"
#include <iostream>

Barang::Barang(std::string nama, int stokBarang, int hargaBarang)
    : m_namaBarang(nama), m_stokBarang(stokBarang), m_hargaBarang(hargaBarang) {}

Barang::~Barang() {
    std::cout << "Destructor called for " << m_namaBarang << std::endl;
}

void Barang::setNama(std::string nama) {
    m_namaBarang = nama;
}

void Barang::setStok(int stokBarang) {
    m_stokBarang = stokBarang;
}

void Barang::setHarga(int hargaBarang) {
    m_hargaBarang = hargaBarang;
}

std::string Barang::getNama() const {
    return m_namaBarang;
}

int Barang::getStok() const {
    return m_stokBarang;
}

int Barang::getHarga() const {
    return m_hargaBarang;
}

void Barang::tambahBarang(int jmlBarang) {
    m_stokBarang += jmlBarang;
    std::cout << "Stok berhasil ditambahkan jumlah : " << m_stokBarang << std::endl;
}

void Barang::kurangiBarang(int barang) {
    if (barang > 0 && barang <= m_stokBarang) {
        m_stokBarang -= barang;
        std::cout << "Stok berhasil dikurangi jumlah : " << m_stokBarang << std::endl;
    } else {
        std::cout << "Pengurangan tidak bisa dilakukan karena jumlah barang negatif atau melebihi stok yang ada." << std::endl;
    }
}

void Barang::jualBarang(int jumlah) {
    if (jumlah > m_stokBarang) {
        std::cout << "Penjualan melebihi stok yang ada!" << std::endl;
    } else if (jumlah <= 0) {
        std::cout << "Jumlah penjualan tidak bisa negatif!" << std::endl;
    } else {
        kurangiBarang(jumlah);
        std::cout << "Penjualan berhasil, " << jumlah << " barang terjual." << std::endl;
    }
}

void Barang::cekBarang() {
    std::cout << (m_stokBarang > 0 ? "barang ada" : "barang kosong") << std::endl;
}

void Barang::cetakBarang() {
    std::cout << "Nama Barang : " << getNama() << std::endl;
    std::cout << "Stok Barang : " << getStok() << std::endl;
    std::cout << "Harga Barang: " << getHarga() << std::endl;
}
