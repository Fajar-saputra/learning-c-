// Contoh 3:
// Sudah ada array satu dimensi A[11], sudah ada isinya dengan ilustrasi sebagai berikut:
// Susun algoritma dan flowchart untuk mencetak isi array yang nilainya lebih besar
// dari 10 sehingga tercetak dengan urutan sebagai berikut:
// 12 17 15 25 11 16 19

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int angka[11] = { 12, 17, 10, 5, 15, 25, 11, 8, 3, 16, 19 };

    for (int i = 1; i <= 11; i++)
    {
        if(angka[i] > 10)
            cout << angka[i] << " ";
    }
    

    return 0;
}
