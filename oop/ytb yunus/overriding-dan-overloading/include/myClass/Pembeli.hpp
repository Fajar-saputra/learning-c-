#include <iostream>
#include <string>

class Pembeli {
public:
    std::string m_nama;
    int m_jumlahBeli;
    std::string m_noTlp;
    std::string m_alamat;

    // Constructor
    Pembeli(std::string nama = "belum ada", int jumlahBeli = 0, std::string noTlp = "belum ada", std::string alamat = "tidak ada");

    // Destructor
    ~Pembeli();

    // Setter
    void setNama(std::string nama);
    void setJumlahBeli(int jumlahBeli);
    void setNoTelp(const std::string& noTelp);
    void setAlamat(std::string alamat);

    // Getter
    std::string getNama() const;
    int getJumlahBeli() const;
    std::string getNoTlp() const;
    std::string getAlamat() const;

    void cetakInfoPembeli();
};

