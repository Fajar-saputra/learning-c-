// MENCETAK ISI ARRAY SATU DIMENSI
// Contoh 1:
// Sudah ada array satu dimensi A[11], sudah ada isinya dengan ilustrasi sebagai berikut:
// Susun algoritma dan flowchart untuk mencetak isi array sehingga tercetak dengan
// urutan sebagai berikut:
// 12 17 10 5 15 25 11 8 3 16 19

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int angka[11] = { 12, 17, 10, 5, 15, 25, 11, 8, 3, 16, 19 };

    for (int i = 0; i < 11; i++)
    {
        cout << angka[i] << " ";
    }
    

    return 0;
}
