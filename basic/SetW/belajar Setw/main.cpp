#include <iostream>
#include <fstream>
#include <iomanip>
#include <array>
#define MAX 6
using namespace std;

int main(){
    fstream database;

    string nama[MAX] = {"Elvira Maharani", "Elfita Junita", "Elvin Rahmattullah", "Otong", "Muhammad Ibrahim", "Muhammad Tono Saputra"};
    string prodi[MAX] = {"Pendidikan Guru Sekolah Dasar", "Teknik Sipil", "Sastra Inggris", "Sarjana Hukum", "Manajamen Bisnis Negara", "Teknik Lingkungan"};
    int tgs1[MAX] = {86,35,90,81,79,65};
    int tgs2[MAX] = {86,35,90,81,79,65};
    int UTS[MAX] = {86,35,90,81,79,65};
    int uas[MAX] = {86,35,90,81,79,65};
    int rata2[MAX] = {86,35,90,81,79,65};

    database.open("database.txt", ios::out);

    if (database.is_open())
    {
        for (int i = 0; i < MAX; i++)
        {
            database << nama[i] << "\t\t\t" << prodi[i] << "\t" << UTS[i] << endl;
            
        }
        database.close();
    }

    system("cls");
    cout << "No   Nama Mahasiswa\t\t   Program Pendidikan\t\tNilai TGS1\tNilai TGS2\tNilai UTS\tNilai UAS\tNilai Rata2" << endl;
    for (int i = 0; i < MAX; i++)
    {
        cout << left << setw(3) << i+1 << "  ";
        cout << left << setw(28) << nama[i];
        cout << left << setw(30) << prodi[i] << "  ";
        cout << right << setw(5) << tgs1[i] << "\t\t";
        cout << right << setw(5) << tgs2[i] << "\t\t";
        cout << right << setw(5) << UTS[i] << "\t\t";
        cout << right << setw(5) << uas[i]<< "\t\t";
        cout << right << setw(5) << rata2[i] << endl;
    }

    return 0;
}