#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;



int main() {
    string jenisBarang;
    int harga, hargaDiskon;

    cout << "Jenis barang : ";
    cin >> jenisBarang;
    cout << "Harga Barang : ";
    cin >> harga;
    if (jenisBarang == "a" || jenisBarang == "A") {
        hargaDiskon = harga - (double) (harga * 10) / 100;
    }   else if (jenisBarang == "b" || jenisBarang == "B") {
        hargaDiskon = harga - (double) (harga * 15) / 100;
    } else  if (jenisBarang == "c" || jenisBarang == "C") {
        hargaDiskon = harga - (double) (harga * 20) / 100;
    } else {
        cout << "Jenis barang salah" << endl;
    }

    
    cout << "Jenis barang B mendapat diskon = 15%, Harga setelah didiskon = ";
    cout << hargaDiskon << endl;
    return 0;
}


