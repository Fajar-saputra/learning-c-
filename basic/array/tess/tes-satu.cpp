#include <iostream>
#include <array>

using namespace std;

int main()
{
    int kolom;
    int baris;

    cout << "\n------------------------------------------------\n";
    cout << "(-- Selamat datang diprogram Array Dimensi 2 --)\n";
    cout << "------------------------------------------------\n";
    cout << "Masukan berapa kolom : ";
    cin >> kolom;
    cout << "Masukan berapa baris : ";
    cin >> baris;
    cout << endl;

    int array_dua_dimensi[kolom][baris];

    for (int i = 0; i < kolom; i++)
    {
        for (int j = 0; j < baris; j++)
        {
            cout << "Masukan data array[" << i << "]"
                 << "[" << j << "] : ";
            cin >> array_dua_dimensi[i][j];
        }
        cout << endl;
    }

    cout << "\t\tHasil dari inputan \n";
    for (int i = 0; i < kolom; i++)
    {
        for (int j = 0; j < baris; j++)
        {
            cout <<"\t["<< array_dua_dimensi[i][j] << "]\t";
        }
        cout << endl;
    }
    
    return 0;
}
