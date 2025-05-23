// Contoh 2:
// Sudah ada array satu dimensi A[11], sudah ada isinya dengan ilustrasi sebagai berikut:
// Susun algoritma dan flowchart untuk mencetak isi array sehingga tercetak dengan
// urutan sebagai berikut:
// 19 16 3 8 11 25 15 5 10 17 12

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int angka[11] = { 12, 17, 10, 5, 15, 25, 11, 8, 3, 16, 19 };

    for (int i = 1; i <= 11; i++)
    {
        cout << angka[11-i] << " ";
    }
    

    return 0;
}
