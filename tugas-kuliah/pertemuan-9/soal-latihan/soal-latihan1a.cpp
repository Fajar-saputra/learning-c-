// Sudah ada array A satu dimensi yang dibuat dengan int A[9]. Belum ada isinya
// dengan ilustrasi sebagai berikut:
// Gambarkan kembali array tersebut lengkap dengan isinya bila diisi dengan
// penggalan program sebagai berikut:
// I = 0;
// while (I<=8)
// { A[I] = I
//  I+=2;
// }

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int I = 0, A[9];
    while (I<=8)
    {
        A[I] = I;
        I += 2;
    }

    cout << "Cetak isi : ";
    I = 0;
    while (I < 9)
    {
        cout << A[I] << " ";
        I += 1;
    }

    return 0;
}
