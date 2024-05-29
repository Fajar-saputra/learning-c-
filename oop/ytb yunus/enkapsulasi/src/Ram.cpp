#include "../include/myClass/Ram.hpp"

// Konstruktor
Ram::Ram(const std::string& nama, int stokBarang, int hargaBarang, int kapasitas, const std::string& jenisRam)
    : Barang(nama, stokBarang, hargaBarang), kapasitas(kapasitas), jenisRam(jenisRam) {}

// Setter
void Ram::setKapasitas(int kapasitas) {
    this->kapasitas = kapasitas;
}

void Ram::setJenisRam(const std::string& jenisRam) {
    this->jenisRam = jenisRam;
}

// Getter
int Ram::getKapasitas() const {
    return kapasitas;
}

std::string Ram::getJenisRam() const {
    return jenisRam;
}

// Fungsi cetak
void Ram::cetakBarang() const {
    Barang::cetakBarang();
    std::cout << "Kapasitas: " << kapasitas << std::endl;
    std::cout << "Jenis Ram: " << jenisRam << std::endl;
}

