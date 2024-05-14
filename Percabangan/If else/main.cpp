#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Tebak Nilai = ";
    cin >> a;

    if (a <= 5){
        cout << "Selamat Anda mendapatkan Mobil" << endl;
    } else if (a <= 9){
        cout << "Selamat Anda mendapatka sepeda" << endl;
    } else if (a <= 10){
        cout << "Selamat Anda mendapatkan Televisi" << endl;
    } else if (a <= 15){
        cout << "Anda Zonk" << endl;
    } else {
        cout << "Tebakan Anda Meleset!!!" << endl;
    }


    cout << "selesai" << endl;
    cin.get();
    return 0;
}
