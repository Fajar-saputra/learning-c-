#include <iostream>
#include <string>
#include <algorithm>

class Penjual {
private:
    std::string m_nama;
    int m_umur;
    int m_lamaKerja;
    std::string m_alamat;
    std::string m_noTelp;

public:
    Penjual(std::string nama = "belum ada", int umur = 0, int lamaKerja = 0, std::string alamat = "tidak ada", std::string noTelp = "000000000000");
    ~Penjual();

    void setNama(std::string nama);
    void setUmur(int umur);
    void setLamaKerja(int lamaKerja);
    void setAlamat(std::string alamat);
    void setNoTelp(const std::string& noTelp);

    std::string getNama() const;
    int getUmur() const;
    int getLamaKerja() const;
    std::string getAlamat() const;
    std::string getNoTelp() const;

    void cetakInfoPenjual() const;
};

