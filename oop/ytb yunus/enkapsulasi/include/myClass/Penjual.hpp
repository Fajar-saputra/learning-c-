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


    explicit Penjual(const std::string& nama = "belum ada", int umur = 0, int lamaKerja = 0, const std::string& alamat = "tidak ada", const std::string& noTelp = "000000000000");
    ~Penjual();

    void setNama(const std::string& nama);
    void setUmur(int umur);
    void setLamaKerja(int lamaKerja);
    void setAlamat(const std::string& alamat);
    void setNoTelp(const std::string& noTelp);

    std::string getNama() const;
    int getUmur() const;
    int getLamaKerja() const;
    std::string getAlamat() const;
    std::string getNoTelp() const;

    void InfoPenjual() const;
};

