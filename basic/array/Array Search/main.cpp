#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

const size_t arraySize = 10;

void printArray(array<int,arraySize> angka){
    cout << "Array : ";
    for(int &a : angka){
        cout << a << " ";
    }
    cout << endl;
}
int main()
{
    array<int, arraySize> angka = {1,5,3,2,7,9,0,6,4,8};
    // sord dulu baru search(binary_search

    printArray(angka);

    int angkaCari;
    bool ketemu;

    printf("Searching angka berapa : ");
    cin >> angkaCari;
    sort(angka.begin(), angka.end());
    ketemu = binary_search(angka.begin(), angka.end(), angkaCari);

    if(ketemu){
        cout << "Ketemu" << endl;
    } else {
        cout << "Tidak Ketemu" << endl;
    }

    return 0;
}
