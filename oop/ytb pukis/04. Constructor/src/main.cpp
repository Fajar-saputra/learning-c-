#include <iostream>
#include <string>

using namespace std;

// class tanpa constructor
class Mahasiswa_1{
    public:
        string nama;
        string nim;
        string prodi;
        double ipk;
};

// Class dengan constructor
class Mahasiswa_2{
    public:
        string nama;
        string nim;
        string prodi;
        double ipk;

        Mahasiswa_2(string inputNama, string inputNim, string inputProdi, double inputIpk){
            Mahasiswa_2::nama = inputNama;
            Mahasiswa_2::nim = inputNim;
            Mahasiswa_2::prodi = inputProdi;
            Mahasiswa_2::ipk = inputIpk;

            cout << "Nama : " << Mahasiswa_2::nama<< endl;
            cout << "Nim  : " << Mahasiswa_2::nim << endl;
            cout << "Prodi: " << Mahasiswa_2::prodi << endl;
            cout << "IPK  : " << Mahasiswa_2::ipk << endl;
            cout << endl;
        };
};

int main(int argc, char const *argv[])
{
    cout << "<- contoh memanggil class tanpa constructor ->" <<endl;
    Mahasiswa_1 Otong;
    Otong.nama = "Otong";
    Otong.nim = "230502";
    Otong.prodi = "Sistem Informasi";
    Otong.ipk = 3.2;

    Mahasiswa_1 Ucup;
    Ucup.nama = "ucup";
    Ucup.nim = "230503";
    Ucup.prodi = "Formasi";
    Ucup.ipk = 3.4;

    cout << "Nama : " <<Otong.nama << endl;
    cout << "Nim  : " <<Otong.nim << endl;
    cout << "Prodi: " <<Otong.prodi << endl;
    cout << "IPK  : " <<Otong.ipk << endl;
    cout << endl;

    cout << "Nama : " << Ucup.nama << endl;
    cout << "Nim  : " << Ucup.nim << endl;
    cout << "Prodi: " << Ucup.prodi << endl;
    cout << "IPK  : " << Ucup.ipk << endl;
    cout << endl;

    cout << "<- contoh memanggil class dengan constructor ->" << endl;
    Mahasiswa_2 Agus = Mahasiswa_2("Agus", "230503", "Teknik Sipil", 3.5);
    Mahasiswa_2 Tono = Mahasiswa_2("Tono", "230532", "Teknik Pertambangan", 3.7);

    return 0;
}
