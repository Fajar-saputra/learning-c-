#include <iostream>
#include "Barang.hpp"

class Prosesor : public Barang {
    public:
        int coreI;
        int generasi;
        std::string namaProsesor;
    
    public:
    // Constructor
    Prosesor(std::string nama = "no name", int stokBarang = 0, int hargaBarang = 0, int coreI = 0, int generasi = 0, std::string namaProsesor = "tidak ada")
        : Barang(nama, stokBarang, hargaBarang), coreI(coreI), generasi(generasi), namaProsesor(namaProsesor) {}

    // Destructor
    ~Prosesor() {
        std::cout << "Destructor called for " << namaProsesor << std::endl;
    }

    // setter 
    void setCoreI(int coreI){
        this->coreI = coreI;
    }
    void setGenerasi(int generasi){
        this->generasi = generasi;
    }
    void setNamaProsesor(std::string namaProsesor){
        this->namaProsesor = namaProsesor;
    }

    // getter
    int getCoreI(){
        return coreI;
    }
    int getGenerasi(){
        return generasi;
    }
    std::string getNamaProsesor(){
        return namaProsesor;
    }

    void infoBarang() {
        std::cout << "Nama Barang : " << getNama() << std::endl;
        std::cout << "Stok Barang : " << getStok() << std::endl;
        std::cout << "Harga Barang: " << getHarga() << std::endl;
        std::cout << "Core I: " << getCoreI() << std::endl;
        std::cout << "Generasi: " << getGenerasi() << std::endl;
        std::cout << "Nama Prosesor: " << getNamaProsesor() << std::endl;
    }
};
