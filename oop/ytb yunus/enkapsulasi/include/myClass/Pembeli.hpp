#include <iostream>
#include <string>

class Pembeli {
private:
    std::string m_nama;
    int m_jumlahBeli;
    std::string m_noTlp;
    std::string m_alamat;

public:
    // Constructor
    
    explicit Pembeli(const std::string& nama = "belum ada", int jumlahBeli = 0, const std::string& noTlp = "belum ada", const std::string& alamat = "tidak ada");

    // Destructor
    ~Pembeli();

    // Setter
    void setNama(const std::string& nama);
    void setJumlahBeli(int jumlahBeli);
    void setNoTlp(const std::string& noTlp);
    void setAlamat(const std::string& alamat);

    // Getter
    std::string getNama() const;
    int getJumlahBeli() const;
    std::string getNoTlp() const;
    std::string getAlamat() const;

    void InfoPembeli() const;
};

