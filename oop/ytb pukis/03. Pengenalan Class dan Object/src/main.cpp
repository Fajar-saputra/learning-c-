#include <iostream>
#include <string>

using namespace std;

class Data
{
    public:
        string nama;
        string alamat;
        string pekerjaan;
        int umur;
        int jumlhAnggotaKeluarga;
};



int main(int argc, char const *argv[])
{
    Data Warga1;
    Warga1.nama = "Elvira Maharani";
    Warga1.alamat = "Sitanang Kecil";
    Warga1.pekerjaan = "Siswa SMA";
    Warga1.umur = 17;
    Warga1.jumlhAnggotaKeluarga = 6;

    Data Warga2;
    Warga2.nama = "Elfita Junita";
    Warga2.alamat = "Sitanang Kecil";
    Warga2.pekerjaan = "Lulusan SMA";
    Warga2.umur = 20;
    Warga2.jumlhAnggotaKeluarga = 6;

    Data Warga3;
    Warga3.nama = "Elvin Rahmattullah";
    Warga3.alamat = "Sitanang Kecil";
    Warga3.pekerjaan = "Murid Sd";
    Warga3.umur = 12;
    Warga3.jumlhAnggotaKeluarga = 6;

    cout << "Nama Warga 1\t: " << Warga1.nama << endl;
    cout << "Nama Warga 1\t: " << Warga1.alamat << endl;
    cout << "Nama Warga 1\t: " << Warga1.pekerjaan << endl;
    cout << "Nama Warga 1\t: " << Warga1.umur << endl;
    cout << "Nama Warga 1\t: " << Warga1.jumlhAnggotaKeluarga << endl;
    cout << endl;
    cout << "Nama Warga 2\t: " << Warga2.nama << endl;
    cout << "Nama Warga 2\t: " << Warga2.alamat << endl;
    cout << "Nama Warga 2\t: " << Warga2.pekerjaan << endl;
    cout << "Nama Warga 2\t: " << Warga2.umur << endl;
    cout << "Nama Warga 2\t: " << Warga2.jumlhAnggotaKeluarga << endl;
    cout << endl;
    cout << "Nama Warga 3\t: " << Warga3.nama << endl;
    cout << "Nama Warga 3\t: " << Warga3.alamat << endl;
    cout << "Nama Warga 3\t: " << Warga3.pekerjaan << endl;
    cout << "Nama Warga 3\t: " << Warga3.umur << endl;
    cout << "Nama Warga 3\t: " << Warga3.jumlhAnggotaKeluarga << endl;


    return 0;
}
