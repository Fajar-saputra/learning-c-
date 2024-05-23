#include <iostream>

class Pembeli{
    public:
        std::string m_nama;
        int m_jumlahBeli;
        std::string m_noTlp;
        std::string m_alamat;

    public:

    void infoPembeli()
        {
            std::cout << "Nama\t\t: " << m_nama << std::endl;
            std::cout << "Umur\t\t: " << m_jumlahBeli << std::endl;
            std::cout << "Lama kerja\t: " << m_noTlp << std::endl;
            std::cout << "Alamat\t\t: " << m_alamat << std::endl
                 << std::endl;
        }

};
