#include <iostream>
#include <string>
#include "Barang.hpp"

class Ram : public Barang {
public:
    int kapasitas;
    std::string jenisRam;

    // Konstruktor
    Ram(const std::string& nama, int stokBarang, int hargaBarang, int kapasitas, const std::string& jenisRam)
    : Barang(nama, stokBarang, hargaBarang), kapasitas(kapasitas), jenisRam(jenisRam) {}

    // Setter
    void setKapasitas(int kapasitas);
    void setJenisRam(const std::string& jenisRam);

    // Getter
    int getKapasitas() const;
    std::string getJenisRam() const;

    // Fungsi cetak
    void cetakBarang() const;
};
