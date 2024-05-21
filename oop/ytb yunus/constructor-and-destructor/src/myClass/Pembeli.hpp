#include <iostream>
using namespace std;

class Pembeli{
    public:
        string nama;
        int jumlahBeli;
        string noTlp;
        string alamat;

    public:

    // Constructor
    Pembeli(const char* nama = "belum ada", int jumlahBeli = 0, string noTlp = "belum ada", string alamat = "tidak ada")
    {
        Pembeli::nama = nama;
        Pembeli::jumlahBeli = jumlahBeli;
        Pembeli::noTlp = noTlp;
        Pembeli::alamat = alamat;
    }

    void cetakInfoPenjual()
        {
            cout << "Nama\t\t: " << nama << endl;
            cout << "Umur\t\t: " << jumlahBeli << endl;
            cout << "Lama kerja\t: " << noTlp << endl;
            cout << "Alamat\t\t: " << alamat << endl
                 << endl;
        }

};
