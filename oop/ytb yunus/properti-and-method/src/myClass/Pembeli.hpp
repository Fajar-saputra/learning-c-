#include <iostream>
using namespace std;

class Pembeli{
    public:
        string nama;
        int jumlahBeli;
        string noTlp;
        string alamat;

    public:

    void cetakInfoPenjual()
        {
            cout << "Nama\t\t: " << nama << endl;
            cout << "Umur\t\t: " << jumlahBeli << endl;
            cout << "Lama kerja\t: " << noTlp << endl;
            cout << "Alamat\t\t: " << alamat << endl
                 << endl;
        }

};
