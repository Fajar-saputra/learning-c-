// Dalam lembar dokumen ada banyak sekali bilangan integer yang merupakan nilai ujian
// mahasiswa. Susun algoritma untuk mengambil 5 nilai pertama yang nilainya >=60
// dan mencetak nilai rata-rata. Dipastikan yang mendapat nilai >=60 lebih dari 5 orang. 

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int nilai, count =0, total = 0;

    for (int i = 1; i >= 1; i++)
    {
        cout << "Masukan nilai " << i  << ": ";
        cin >> nilai;

        if (nilai < 60)
        {
            continue;
        }

        count++;
        (total += nilai)/count;

        if (count == 5)
        {
            break;
        }

    }
    

    cout << "Total dari angka diinput : " << total/count << endl;
    return 0;
}
