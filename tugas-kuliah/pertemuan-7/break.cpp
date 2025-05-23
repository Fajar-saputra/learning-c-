// Dalam lembar dokumen ada 10 buah bilangan integer. Susun algoritma untuk
// menginput bilangan-bilangan tersebut dan menghitung total nilai bilangan-bilangan
// yang diinput. Bila totalnya sudah >1000, maka berhenti menginput dan mencetak
// totalnya serta proses selesai walaupun belum semua bilangan diinput. Bila totalnya
// belum > 1000 maka input dan hitung terus total terus-menerus sampai 10 buah
// bilangan diinput dan dihitung totalnya, kemudian cetak total dan proses selesai.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int total = 0,
    inputAngka;
    string hasilTotal;

    cout << "Menghitung total " << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "Masukan angka sembarang: ";
        cin >> inputAngka;
        total += inputAngka;
        if (total > 1000) break;
    
    }

    cout << "Total dari angka diinput : " << total << endl;
    return 0;
}
