#include <iostream>
#include <vector>
using namespace std;

void displayVektor(vector<int> angka);

int main(int argc, char const *argv[])
{
    vector<int> angka = {5, 4, 2, 3, 1};

    displayVektor(angka);
    // Menambahkan elemen dengan menggunakan push_back()
    angka.push_back(7);
    angka.push_back(10);
    angka.push_back(8);
    angka.push_back(11);
    angka.push_back(9);
    displayVektor(angka);

    // menghapus elemen terakhir dengan menggunakan pop_back()
    angka.pop_back();
    angka.pop_back();
    displayVektor(angka);

    return 0;
}

void displayVektor(vector<int> angka)
{
      // menghitung elemen dengan menggunakan .size()
    for (int i = 0; i < angka.size(); i++)
    {
        cout << angka[i] << " ";
    }
    cout << endl;
}
