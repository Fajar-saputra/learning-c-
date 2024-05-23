#include <iostream>
#include <algorithm>

class Penjual {
private:
    std::string m_nama;
    int m_umur;
    int m_lamaKerja;
    std::string m_alamat;
    std::string m_noTelp;

public:
    // Constructor
    Penjual(std::string nama = "belum ada", int umur = 0, int lamaKerja = 0, std::string alamat = "tidak ada")
        : m_nama(nama), m_umur(umur), m_lamaKerja(lamaKerja), m_alamat(alamat) {}

    ~Penjual(){
        std::cout << "class sudah dihapus" << std::endl;
    };

    // Setter dengan validasi
    void setNama(std::string nama) {
        if (!nama.empty()) {
            this->m_nama = nama;
        }
    }

    void setUmur(int umur) {
        if (umur >= 0) {
            this->m_umur = umur;
        }
    }

    void setLamaKerja(int lamaKerja) {
        if (lamaKerja >= 0) {
            this->m_lamaKerja = lamaKerja;
        }
    }

    void setAlamat(std::string alamat) {
        if (!alamat.empty()) {
            this->m_alamat = alamat;
        }
    }

    void setNoTelp(const std::string& noTelp) {
        if (!noTelp.empty() && noTelp.size() == 12 && std::all_of(noTelp.begin(), noTelp.end(), ::isdigit)) {
            this->m_noTelp = noTelp;
        }
    }

    // Getter
    std::string getNama() const {
        return m_nama;
    }

    int getUmur() const {
        return m_umur;
    }

    int getLamaKerja() const {
        return m_lamaKerja;
    }

    std::string getAlamat() const {
        return m_alamat;
    }

    std::string getNoTelp() const {
        return m_noTelp;
    }

    void cetakInfoPenjual() const {
        std::cout << "Nama\t\t: " << m_nama << std::endl;
        std::cout << "Umur\t\t: " << m_umur << std::endl;
        std::cout << "Lama kerja\t: " << m_lamaKerja << " tahun" << std::endl;
        std::cout << "Alamat\t\t: " << m_alamat << std::endl;
        std::cout << "No. Telp\t: " << m_noTelp << std::endl << std::endl;
    }
};
