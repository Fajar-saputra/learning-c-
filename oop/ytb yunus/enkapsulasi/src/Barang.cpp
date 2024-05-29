#include "../include/myClass/Barang.hpp"
#include <iostream>

Barang::Barang(const std::string& nama, int stokBarang, int hargaBarang)
    : m_nama(nama), m_stokBarang(stokBarang), m_hargaBarang(hargaBarang) {}

Barang::~Barang() {
    std::cout << "Destructor called for " << m_nama << std::endl;
}

void Barang::setNama(const std::string& nama) {
    m_nama = nama;
}

void Barang::setStok(int stokBarang) {
    m_stokBarang = stokBarang;
}

void Barang::setHarga(int hargaBarang) {
    m_hargaBarang = hargaBarang;
}

const std::string& Barang::getNama() const {
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
    if (m_stokBarang < 0) {
        std::cout << "Stok tidak dapat negatif, stok saat ini dikembalikan ke 0." << std::endl;
        m_stokBarang = 0;
    } else {
        std::cout << "Stok berhasil ditambahkan, jumlah stok saat ini: " << m_stokBarang << std::endl;
    }
}

void Barang::kurangiBarang(int barang) {
    if (barang > m_stokBarang) {
        std::cout << "Pengurangan melebihi stok yang ada!" << std::endl;
    } else {
        m_stokBarang -= barang;
        std::cout << "Stok berhasil dikurangi, jumlah stok saat ini: " << m_stokBarang << std::endl;
        if (m_stokBarang == 0) {
            std::cout << "Stok barang sudah kosong" << std::endl;
        }
    }
}

void Barang::jualBarang(int jumlah) {
    if (jumlah > m_stokBarang) {
        std::cout << "Penjualan melebihi stok yang ada!" << std::endl;
    } else {
        kurangiBarang(jumlah);
        std::cout << "Penjualan berhasil, " << jumlah << " barang terjual, stok tersisa: " << m_stokBarang << std::endl;
    }
}

void Barang::cekBarang() const {
    std::cout << (m_stokBarang > 0 ? "barang ada" : "barang kosong") << std::endl;
}

void Barang::cetakBarang() const {
    std::cout << "Nama Barang : " << getNama() << std::endl;
    std::cout << "Stok Barang : " << getStok() << std::endl;
    std::cout << "Harga Barang: " << getHarga() << std::endl;
}

