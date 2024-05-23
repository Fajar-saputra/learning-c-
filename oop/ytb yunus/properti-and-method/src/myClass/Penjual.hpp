#include <iostream>

class Penjual{
    public:
        std::string m_nama;
        int m_umur;
        int m_lamaKerja;
        std::string m_alamat;

    public:
    void cetakInfoPenjual()
        {
            std::cout << "Nama\t\t: " << m_nama << std::endl;
            std::cout << "Umur\t\t: " << m_umur << std::endl;
            std::cout << "Lama kerja\t: " << m_lamaKerja << "tahun"<< std::endl;
            std::cout << "Alamat\t\t: " << m_alamat << std::endl
                 << std::endl;
        }
};
