#include <iostream>
using namespace std;

class Penjual{
    public:
        string nama;
        int umur;
        int lamaKerja;
        string alamat;

    public:
    void cetakInfoPenjual()
        {
            cout << "Nama\t\t: " << nama << endl;
            cout << "Umur\t\t: " << umur << endl;
            cout << "Lama kerja\t: " << lamaKerja << "tahun"<< endl;
            cout << "Alamat\t\t: " << alamat << endl
                 << endl;
        }
};