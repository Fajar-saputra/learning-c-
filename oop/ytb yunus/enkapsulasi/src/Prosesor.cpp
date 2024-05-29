#include "../include/myClass/Prosesor.hpp"

Prosesor::Prosesor(const std::string& nama, int stokBarang, int hargaBarang, int coreI, int generasi, const std::string& namaProsesor)
    : Barang(nama, stokBarang, hargaBarang), m_coreI(coreI), m_generasi(generasi), m_namaProsesor(namaProsesor) {}

Prosesor::~Prosesor() {
    std::cout << "Destructor called for " << m_namaProsesor << std::endl;
}

void Prosesor::setCoreI(int coreI) {
    this->m_coreI = coreI;
}

void Prosesor::setGenerasi(int generasi) {
    this->m_generasi = generasi;
}

void Prosesor::setNamaProsesor(const std::string& namaProsesor) {
    this->m_namaProsesor = namaProsesor;
}

int Prosesor::getCoreI() const {
    return m_coreI;
}

int Prosesor::getGenerasi() const {
    return m_generasi;
}

std::string Prosesor::getNamaProsesor() const {
    return m_namaProsesor;
}

void Prosesor::infoBarang() const {
    Barang::cetakBarang();
    std::cout << "Core I: " << getCoreI() << std::endl;
    std::cout << "Generasi: " << getGenerasi() << std::endl;
    std::cout << "Nama Prosesor: " << getNamaProsesor() << std::endl;
}