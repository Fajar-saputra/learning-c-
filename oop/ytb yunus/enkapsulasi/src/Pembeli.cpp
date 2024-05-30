#include "../include/myClass/Pembeli.hpp"
#include <algorithm>

// Constructor
Pembeli::Pembeli(const std::string& m_nama, int m_jumlahBeli, const std::string& m_noTlp, const std::string& m_alamat)
    : m_nama(m_nama), m_jumlahBeli(m_jumlahBeli), m_noTlp(m_noTlp), m_alamat(m_alamat) {}

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
void Pembeli::setNoTlp(const std::string& noTlp) {
    if (!noTlp.empty() && noTlp.size() == 12 && std::all_of(noTlp.begin(), noTlp.end(), ::isdigit)) {
        this->m_noTlp = noTlp;
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

void Pembeli::cetakInfoPembeli() const {
    std::cout << "Nama\t\t: " << m_nama << std::endl;
    std::cout << "Jumlah Beli\t: " << m_jumlahBeli << std::endl;
    std::cout << "Nomor Telepon\t: " << m_noTlp << std::endl;
    std::cout << "Alamat\t\t: " << m_alamat << std::endl << std::endl;
}
