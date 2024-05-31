#include "../include/myClass/Prosesor.hpp"

Prosesor::Prosesor(std::string nama, int stokBarang, int hargaBarang, int coreI, int generasi)
    : Barang(nama, stokBarang, hargaBarang), m_coreI(coreI), m_generasi(generasi) {}

Prosesor::~Prosesor(){
    std::cout << "Destructor called for " << Barang::getNama() << std::endl;
}


void Prosesor::setCoreI(int coreI) {
    this->m_coreI = coreI;
}

void Prosesor::setGenerasi(int generasi) {
    this->m_generasi = generasi;
}

void Prosesor::setNamaProsesor(std::string namaProsesor) {
    this->setNama(namaProsesor);
}

int Prosesor::getCoreI() {
    return m_coreI;
}

int Prosesor::getGenerasi() {
    return m_generasi;
}

void Prosesor::infoBarang() {
    Barang::cetakBarang();
    std::cout << "Core I      : " << getCoreI() << std::endl;
    std::cout << "Generasi    : " << getGenerasi() << std::endl
              << std::endl;
}
