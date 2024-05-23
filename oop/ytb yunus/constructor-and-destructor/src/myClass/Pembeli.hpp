#include <iostream>

class Pembeli {
public:
    std::string m_nama;
    int m_jumlahBeli;
    std::string m_noTlp;
    std::string m_alamat;

    // Constructor dengan initializer list
    Pembeli(std::string nama = "belum ada", int jumlahBeli = 0, std::string noTlp = "belum ada", std::string alamat = "tidak ada")
    : m_nama(nama), m_jumlahBeli(jumlahBeli), m_noTlp(noTlp), m_alamat(alamat) {}

    void infoPembeli() {
        std::cout << "Nama\t\t: " << m_nama << std::endl;
        std::cout << "Jumlah Beli\t: " << m_jumlahBeli << std::endl;
        std::cout << "No. Tlp\t\t: " << m_noTlp << std::endl;
        std::cout << "Alamat\t\t: " << m_alamat << std::endl << std::endl;
    }
};

