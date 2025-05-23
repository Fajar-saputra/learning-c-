// Sudah ada array satu dimensi yang dibuat dengan int A[11].
// Sudah ada isinya nilainilai numerik. Susun algoritma untuk mencetak Total isi array tersebut.
// 12,17,10,5, 15, 25,11,8,3,16,19

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int angka[11] = {12, 17, 10, 5, 15, 25, 11, 8, 3, 16, 19};
    int total = 0;

    for (int i = 0; i < 11; i++)
    {
        total += angka[i];
    }

    cout << "Totalnya : " << total <<endl;
    return 0;
}
