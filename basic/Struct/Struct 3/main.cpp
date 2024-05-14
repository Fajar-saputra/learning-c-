#include <iostream>

using namespace std;

int main()
{

    struct
    {
        string harga;
        string nama;
        string keluaran;
    }mycar1,mycar2;



    mycar1.nama = "Ferrari";
    mycar1.harga =  "1.000.000.000";
    mycar1.keluaran = "1999";

    mycar2.nama = "Fourtuner";
    mycar2.harga =  "950.000.000";
    mycar2.keluaran = "1997";

    cout << mycar1.nama << " " << mycar2.harga << " " << mycar2.keluaran << endl;



    cin.get();
    return 0;
}
