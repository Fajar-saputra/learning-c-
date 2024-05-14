#include <iostream>

using namespace std;

int main()
{
    // TIPE DATA NUMBER YANG SERING DIGUNAKAN
    int tipeNumber = 1;
    double tipeDouble = 1.99;
    float tipeFloat = 1.34;

    // TIPE DATA BOOLEAN
    bool tipeBoolean = true;

    // TIPE DATA HURUF
    char tipeChar = 'a';
    string tipeString = "Kamu";
    

    /* UNTUK MENAMPILKAN ISI DARI VARIABEL BISA MENGGUNAKAN cout  DAN UNTUK MEMASUKKAN
    SUATU NILAI KE SEBUAH VARIABEL DAPAT MENGGUNAKAN cin ATAU getline()*/

    cout << "Isi variable TipeString : " << tipeString << endl;
    cout << "Ubah Isi variable TipeString : ";
    cin >> tipeString;
    cout << "Isi variable TipeString setelah diubah : " << tipeString << endl;

    return 0;
}
