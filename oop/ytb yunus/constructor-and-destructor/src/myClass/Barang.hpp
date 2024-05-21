#include <iostream>
using namespace std;

class Barang{
    public:
    // property / attribute
        string m_nama;
        int m_stokBarang;
        int m_hargaBarang;

    
    public:
    // constructor
    Barang(const char* m_nama = "no name",int m_stokBarang = 0,int m_hargaBarang = 0)
    {
        Barang::m_nama = m_nama;
        Barang::m_stokBarang = m_stokBarang;
        Barang::m_hargaBarang = m_hargaBarang;
    }

    // Destructor
    // ~Barang()
    // {
    //     cout << "sudah selesai menggunakan objek!" << endl;
    // }

    // method / behavior
    void tambahBarang(int jmlBarang)
    {
        m_stokBarang = m_stokBarang + jmlBarang;
        cout << "Stok berhasil ditambahkan jumlah : " << m_stokBarang << endl;
    }

    void kurangiBarang(int barang)
    {
        m_stokBarang = m_stokBarang - barang;
        cout << "Stok berhasil dikurangi jumlah : " << m_stokBarang << endl;
    }

    void cekBarang(){
        if (m_stokBarang > 0)
        {
            cout << "barang ada" << endl;
        } else{
            cout << "barang kosong\n";
        }
        
    }


    void infoBarang()
    {
        cout << "Nama Barang : " << m_nama << endl;
        cout << "Stok Barang : " << m_stokBarang << endl;
        cout << "Harga Barang: " << m_hargaBarang << endl
             << endl;
    }
};