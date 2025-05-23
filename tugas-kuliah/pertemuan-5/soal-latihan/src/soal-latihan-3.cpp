#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;


int main() {
    int lamaKerja, jamMasuk, jamKeluar;

    cout << "Jam Masuk: ";
    cin >> jamMasuk;
    cout << "Jam Keluar: ";
    cin >> jamKeluar;
    if (jamKeluar >= jamMasuk) {
        lamaKerja = jamKeluar - jamMasuk;
        cout << lamaKerja << endl;
    } else {
        lamaKerja = 12 - jamMasuk + jamKeluar;
        cout << lamaKerja << endl;
    }
    return 0;
}

