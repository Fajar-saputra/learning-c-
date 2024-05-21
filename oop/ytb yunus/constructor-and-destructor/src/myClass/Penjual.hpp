#include <iostream>
using namespace std;

class Penjual{
    public:
        string nama;
        int umur;
        int lamaKerja;
        string alamat;

    public:
    // Constructor
    Penjual(const char* nama = "belum ada", int umur = 0, int lamaKerja = 0, string alamat = "tidak ada")
    {
        Penjual::nama = nama;
        Penjual::umur = umur;
        Penjual::lamaKerja = lamaKerja;
        Penjual::alamat = alamat;
    }

    void cetakInfoPenjual()
        {
            cout << "Nama\t\t: " << nama << endl;
            cout << "Umur\t\t: " << umur << endl;
            cout << "Lama kerja\t: " << lamaKerja << "tahun"<< endl;
            cout << "Alamat\t\t: " << alamat << endl
                 << endl;
        }
};