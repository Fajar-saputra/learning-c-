// Sudah ada array A satu dimensi yang dibuat dengan int A[9]. Belum ada isinya
// dengan ilustrasi sebagai berikut:
// Gambarkan kembali array tersebut lengkap dengan isinya bila diisi dengan
// penggalan program sebagai berikut:
// For (I=0;I<=8;I++)
// {  A[I] = I*2+1

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int I = 0, A[9];

    for (int i = 0; i <= 8; i++)
    {
        A[I] = I * 2 + 1;
    }

    cout << "Cetak isi : ";
    for (int i = 0; i <= 8; i++)
    {
        cout << A[i] << " ";
    }
    
    

    return 0;
}
