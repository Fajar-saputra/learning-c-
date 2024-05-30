#include "../include/myClass/Ram.hpp"

// Konstruktor
Ram::Ram(std::string nama, int stokBarang, int hargaBarang, int kapasitas, std::string jenisRam)
    : Barang(nama, stokBarang, hargaBarang), kapasitas(kapasitas), jenisRam(jenisRam) {}

// Setter
void Ram::setKapasitas(int kapasitas) {
    this->kapasitas = kapasitas;
}

void Ram::setJenisRam(std::string jenisRam) {
    this->jenisRam = jenisRam;
}

// Getter
int Ram::getKapasitas() {
    return kapasitas;
}

std::string Ram::getJenisRam() {
    return jenisRam;
}

// Fungsi cetak
void Ram::cetakBarang() {
    Barang::cetakBarang();
    std::cout << "Kapasitas: " << kapasitas << std::endl;
    std::cout << "Jenis Ram: " << jenisRam << std::endl;
}

