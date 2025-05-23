// Contoh 1:
// Dalam lembar dokumen ada data berupa nilai ujian mahasiswa sebagai berikut:
// 57, 75, 90, 55, 60, 62, 72, 58, 76, 69, 67, 82, 65, 48, 79, 64, 50, dst.
\
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int tampungNilai[11], inputNilai;
    

    for (int index = 0; index < 11; index++)
    {
        cout << "Masukan nilai " << index + 1 << " : ";
        cin >> inputNilai;
        tampungNilai[index] = inputNilai;
    }

    cout << "Isi Nilai ";
    for (int i = 0; i < 11; i++)
    {
        cout << tampungNilai[i] << " ";
    }
    
    
    return 0;
}
