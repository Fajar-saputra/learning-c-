#include "../include/myClass/Penjual.hpp"

explicit Penjual::Penjual(const std::string& nama, int umur, int lamaKerja, const std::string& alamat, const std::string& noTelp)
    : m_nama(nama), m_umur(umur), m_lamaKerja(lamaKerja), m_alamat(alamat), m_noTelp(noTelp) {}

Penjual::~Penjual() {
    std::cout << "class sudah dihapus" << std::endl;
}

void Penjual::setNama(const std::string& nama) {
    if (!nama.empty()) {
        m_nama = nama;
    }
}

void Penjual::setUmur(int umur) {
    if (umur >= 0) {
        m_umur = umur;
    }
}

void Penjual::setLamaKerja(int lamaKerja) {
    if (lamaKerja >= 0) {
        m_lamaKerja = lamaKerja;
    }
}

void Penjual::setAlamat(const std::string& alamat) {
    if (!alamat.empty()) {
        m_alamat = alamat;
    }
}

void Penjual::setNoTelp(const std::string& noTelp) {
    if (!noTelp.empty() && noTelp.size() == 12 && std::all_of(noTelp.begin(), noTelp.end(), ::isdigit)) {
        m_noTelp = noTelp;
    }
}

std::string Penjual::getNama() const {
    return m_nama;
}

int Penjual::getUmur() const {
    return m_umur;
}

int Penjual::getLamaKerja() const {
    return m_lamaKerja;
}

std::string Penjual::getAlamat() const {
    return m_alamat;
}

std::string Penjual::getNoTelp() const {
    return m_noTelp;
}

void Penjual::InfoPenjual() const {
    std::cout << "Nama\t\t: " << m_nama << std::endl;
    std::cout << "Umur\t\t: " << m_umur << std::endl;
    std::cout << "Lama kerja\t: " << m_lamaKerja << " tahun" << std::endl;
    std::cout << "Alamat\t\t: " << m_alamat << std::endl;
    std::cout << "No. Telp\t: " << m_noTelp << std::endl << std::endl;
}
