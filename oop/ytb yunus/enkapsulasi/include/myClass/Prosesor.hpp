#include <iostream>
#include "Barang.hpp"

class Prosesor : public Barang {
private:
    int m_coreI;
    int m_generasi;
    std::string m_namaProsesor;

public:
    // Constructor
    Prosesor(std::string nama = "no name", int stokBarang = 0, int hargaBarang = 0, int coreI = 0, int generasi = 0, std::string namaProsesor = "tidak ada");

    // Destructor
    ~Prosesor();

    // setter 
    void setCoreI(int coreI);
    void setGenerasi(int generasi);
    void setNamaProsesor(std::string namaProsesor);

    // getter
    int getCoreI();
    int getGenerasi();
    std::string getNamaProsesor();

    void infoBarang();
};

