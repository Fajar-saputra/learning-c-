// Dalam lembar dokumen banyak sekali nilai-nilai integer yang kalau nilainya di total
// akan leih besar dari 1000. Susun algoritma untuk menginput bilangan-bilangan
// tersebut satu per satu dan menghitung totalnya. Input berhenti apabila total nilai
// yang diinput lebih besar dari 500. Kemudian mencetak total tersebut dan proses
// selesai.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int total = 0, input;

    for (int i = 0; i < 1000; i++)
    {
        cout << "Masukan angka sembarang : ";
        cin >> input;

        total += input;

        if (input > 500)
        {
            break;
        }
        
    }

    cout << "Total angka yang diinput : " << total << endl;

    return 0;
}
