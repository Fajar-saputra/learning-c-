#include <iostream>
#include <string>

class Pembeli {
public:
    std::string m_nama;
    int m_jumlahBeli;
    std::string m_noTlp;
    std::string m_alamat;

    // Constructor
    Pembeli(std::string nama = "belum ada", int jumlahBeli = 0, std::string noTlp = "belum ada", std::string alamat = "tidak ada")
        : m_nama(nama), m_jumlahBeli(jumlahBeli), m_noTlp(noTlp), m_alamat(alamat) {}

    // Destructor
    ~Pembeli() {
        std::cout << "Destructor called for " << m_nama << std::endl;
    }

    // Setter
    void setNama(std::string nama) {
        this->m_nama = nama;
    }
    void setJumlahBeli(int jumlahBeli) {
        this->m_jumlahBeli = jumlahBeli;
    }
    void setNoTelp(const std::string& noTelp) {
        if (!noTelp.empty() && noTelp.size() == 12 && std::all_of(noTelp.begin(), noTelp.end(), ::isdigit)) {
            this->m_noTlp = noTelp;
        }
    }
    void setAlamat(std::string alamat) {
        this->m_alamat = alamat;
    }

    // Getter
    std::string getNama() const {
        return m_nama;
    }
    int getJumlahBeli() const {
        return m_jumlahBeli;
    }
    std::string getNoTlp() const {
        return m_noTlp;
    }
    std::string getAlamat() const {
        return m_alamat;
    }

    void cetakInfoPembeli() {
        std::cout << "Nama\t\t: " << m_nama << std::endl;
        std::cout << "Jumlah Beli\t: " << m_jumlahBeli << std::endl;
        std::cout << "Nomor Telepon\t: " << m_noTlp << std::endl;
        std::cout << "Alamat\t\t: " << m_alamat << std::endl << std::endl;
    }
};

