#include <iostream>
#include "Barang.hpp"

class Prosesor : public Barang {
private:
    int m_coreI;
    int m_generasi;
    std::string m_namaProsesor;


public:
    // Constructor
   
    explicit Prosesor(const std::string& nama = "no name", int stokBarang = 0, int hargaBarang = 0, int coreI = 0, int generasi = 0, const std::string& namaProsesor = "tidak ada");

    // Destructor
    ~Prosesor();

    // setter 
    void setCoreI(int coreI);
    void setGenerasi(int generasi);
    void setNamaProsesor(const std::string& namaProsesor);

    // getter
    int getCoreI() const;
    int getGenerasi() const;
    std::string getNamaProsesor() const;

    void infoBarang() const;
};

