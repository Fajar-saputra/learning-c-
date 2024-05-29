#include "../include/myClass/Pembeli.hpp"
#include <algorithm>

// Constructor
Pembeli::Pembeli(const std::string& nama, int jumlahBeli, const std::string& noTlp, const std::string& alamat)
    : m_nama(nama), m_jumlahBeli(jumlahBeli), m_noTlp(noTlp), m_alamat(alamat) {}

// Destructor
Pembeli::~Pembeli() {
    std::cout << "Destructor called for " << m_nama << std::endl;
}

// Setter
void Pembeli::setNama(const std::string& nama) {
    this->m_nama = nama;
}
void Pembeli::setJumlahBeli(int jumlahBeli) {
    this->m_jumlahBeli = jumlahBeli;
}
void Pembeli::setNoTlp(const std::string& noTelp) {
    if (!noTelp.empty() && noTelp.size() == 12 && std::all_of(noTelp.begin(), noTelp.end(), ::isdigit)) {
        this->m_noTlp = noTelp;
    } else {
        std::cout << "Nomor telepon tidak valid. Harus 12 digit dan hanya mengandung angka." << std::endl;
    }
}
void Pembeli::setAlamat(const std::string& alamat) {
    this->m_alamat = alamat;
}

// Getter
std::string Pembeli::getNama() const {
    return m_nama;
}
int Pembeli::getJumlahBeli() const {
    return m_jumlahBeli;
}
std::string Pembeli::getNoTlp() const {
    return m_noTlp;
}
std::string Pembeli::getAlamat() const {
    return m_alamat;
}

void Pembeli::InfoPembeli() const {
    std::cout << "Nama\t\t: " << m_nama << std::endl;
    std::cout << "Jumlah Beli\t: " << m_jumlahBeli << std::endl;
    std::cout << "Nomor Telepon\t: " << m_noTlp << std::endl;
    std::cout << "Alamat\t\t: " << m_alamat << std::endl << std::endl;
}
