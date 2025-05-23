// Dalam lembar dokumen ada data berupa nilai ujian mahasiswa sebagai berikut:
// 57, 75, 90, 55, 60, 62, 72, 58, 76, 69, 67, 82, 65, 48, 79, 64, 50, dst.
// Sudah ada (sudah dibuat) array satu dimensi int A[11] belum ada isinya. Susun
// algoritma untuk menginput data dari luar melalui keyboard. Bila data yang diinput
// nilainya < 60, tidak disimpan kedalam array, tetapi bila nilai yang diinput >=60

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int tampungNilai[11], inputNilai;
    

    for (int index = 0; index < 11; index++)
    {
        cout << "Masukan nilai " << index + 1 << " : ";
        cin >> inputNilai;
        if(inputNilai >= 60 ){
            tampungNilai[index] = inputNilai;
        } else {
            tampungNilai[index] = 0;
        }
    }

    cout << "Isi Nilai ";
    for (int i = 0; i < 11; i++)
    {
        cout << tampungNilai[i] << " ";
    }
    
    
    return 0;
}
