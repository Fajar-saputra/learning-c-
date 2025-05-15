#include <iostream>
using namespace std;

int main() {
    int luas[4][3] = {
        {225 * 335, 299 * 278, 300 * 250},
        {215 * 394, 144 * 718, 300 * 290},
        {200 * 400, 240 * 333, 142 * 619},
        {314 * 298, 411 * 198, 333 * 222}
    };

    int harga_jual[3] = {100, 120, 150}; // per cm² untuk tiap merek

    int total_luas[3] = {0, 0, 0}; // total luas semua kandang per merek

    // Menjumlahkan total luas untuk tiap merek (kolom)
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            total_luas[j] += luas[i][j];
        }
    }

    // Hitung total uang per merek dan tampilkan
    for (int i = 0; i < 3; i++) {
        int total_harga = total_luas[i] * harga_jual[i];
        cout << total_harga << endl;
    }

    return 0;
}
