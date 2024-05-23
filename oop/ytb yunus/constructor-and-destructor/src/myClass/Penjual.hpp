#include <iostream>

class Penjual{
    public:
        std::string m_nama;
        int m_umur;
        int m_lamaKerja;
        std::string m_alamat;

    public:
    // Constructor
    Penjual(std::string nama = "belum ada", int umur = 0, int lamaKerja = 0, std::string alamat = "tidak ada"): 
    m_nama(nama), m_umur(umur), m_lamaKerja(lamaKerja), m_alamat(alamat) {}

    void cetakInfoPenjual()
        {
            std::cout << "Nama\t\t: " << m_nama << std::endl;
            std::cout << "Umur\t\t: " << m_umur << std::endl;
            std::cout << "Lama kerja\t: " << m_lamaKerja << " tahun" << std::endl; 
            std::cout << "Alamat\t\t: " << m_alamat << std::endl
                 << std::endl;
        }
};
