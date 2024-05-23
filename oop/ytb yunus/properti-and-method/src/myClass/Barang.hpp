#include <iostream>

class Barang{
    public:
    // property / attribute
        std::string m_nama;
        int m_stokBarang;
        int m_hargaBarang;

    public:
    // method / behavior

    void tambahBarang(int jmlBarang)
    {
        m_stokBarang += jmlBarang;
        std::cout << "Stok berhasil ditambahkan jumlah : " << m_stokBarang << std::endl;
    }

    void kurangiBarang(int barang)
    {
        m_stokBarang -= barang;
        std::cout << "Stok berhasil dikurangi jumlah : " << m_stokBarang << std::endl;
    }

    void cekBarang(){
        if (m_stokBarang > 0)
        {
            std::cout << "barang ada" << std::endl;
        } else{
            std::cout << "barang kosong\n";
        }
        
    }


    void infoBarang()
    {
        std::cout << "Nama Barang : " << m_nama << std::endl;
        std::cout << "Stok Barang : " << m_stokBarang << std::endl;
        std::cout << "Harga Barang: " << m_hargaBarang << std::endl
             << std::endl;
    }
};