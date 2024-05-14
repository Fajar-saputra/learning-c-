#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Perbandingan string
    string input;
    string nama_rahasia("asep");
    int i = 0, a = 1;

    while(true){
        cout << "Masukkan nama tebakan anda : ";
        cin >> input;
        if(input == nama_rahasia){
            cout << "Tebakan Anda benar\n";
            break;
        }
        i++;
        cout << "Tebakan Anda Salah!!!\n";
    }
    i += a;
    cout << "Program Selesai Anda menebak sebanyak " << i << endl;

    return 0;
}
