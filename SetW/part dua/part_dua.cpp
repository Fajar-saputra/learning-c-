#include <iomanip>
#include <iostream>
#include <array>
#define MAX 5
using namespace std;

int main()
{
    string nama[MAX] = {"Asep Septiawan", "Tono Barat", "Agus Timur", "Otong Selatan", "Dwi Antartika"};
    string prodi[MAX] = {"Teknik Mesin", "Teknik Sipil", "Sastra Inggris", "Teknk Informasi", "Sistem Informasi"};
    int uts[MAX] = {80,88,91,93,78};
    int uas[MAX] = {88,90,81,87,89};
    double rata2[MAX] = {82,89,83,90,79};

    cout << "No   Nama\t\tProgram Pendidikan\tNilai UTS   Nilai UAS   Nilai Rata-rata" << endl;
    for (int i = 0; i < MAX; i++)
    {
        cout << left << setw(2) << i+1 <<"   ";
        cout << left << setw(18) << nama[i] << "\t";
        cout << left << setw(18) << prodi[i]<<"\t";
        cout << right << setw(8) << uts[i]<<"   ";
        cout << right << setw(10) <<uas[i]<<"   ";
        cout << right << setw(10) <<rata2[i] << endl;
    }
    


    return 0;
}
