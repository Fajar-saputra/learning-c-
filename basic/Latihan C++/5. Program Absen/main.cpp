#include <iostream>
using namespace std;

int main () {

    string absen,nama;

    cout << "==================================" << endl;
    cout << "===========  Absen Siswa =========" << endl;
    cout << "==================================\n\n" << endl;
    cout << "Nama Siswa : ";
    cin >> nama;

    cout << "Masukkan Absen: ";
    cin >> absen;

    if (absen == "A") {
        cout << "Siswa Alpha\n" << endl;
    } else if (absen == "S") {
        cout << "Siswa sakit\n" << endl;
    } else if (absen == "H") {
        cout << "Siswa Hadir\n" << endl;
    } else {
        cout << "Mohon Input A, S, atau H!!\n" << endl;
    }

    cout << "===================================" << endl;
    cout << "Terima Kasih Telah Mengisikan Absen" << endl;
    cout << "===================================\n\n" << endl;
    cin.get();
    return 0;

}
