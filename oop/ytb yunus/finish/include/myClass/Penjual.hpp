#ifndef PENJUAL_HPP
#define PENJUAL_HPP

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
    Penjual(const std::string& nama, int umur, int lamaKerja, std::string alamat, const std::string& noTelp);
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

    void cetakInfoPenjual() const;
};

#endif

