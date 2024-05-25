#include "../include/myClass/Barang.hpp"
#include <iostream>

Barang::Barang(std::string nama, int stokBarang, int hargaBarang)
    : m_nama(nama), m_stokBarang(stokBarang), m_hargaBarang(hargaBarang) {}

Barang::~Barang() {
    std::cout << "Destructor called for " << m_nama << std::endl;
}

void Barang::setNama(std::string nama) {
    m_nama = nama;
}

void Barang::setStok(int stokBarang) {
    m_stokBarang = stokBarang;
}

void Barang::setHarga(int hargaBarang) {
    m_hargaBarang = hargaBarang;
}

std::string Barang::getNama() const {
    return m_nama;
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
    if (barang > m_stokBarang) {
        std::cout << "Pengurangan melebihi stok yang ada!" << std::endl;
        return;
    }
    m_stokBarang -= barang;
    std::cout << "Stok berhasil dikurangi jumlah : " << m_stokBarang << std::endl;
}

void Barang::jualBarang(int jumlah) {
    if (jumlah > m_stokBarang) {
        std::cout << "Penjualan melebihi stok yang ada!" << std::endl;
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

