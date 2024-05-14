#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

const size_t arraySize = 10;

void printArray(array <int, arraySize> &angka){
    for(int &a : angka){
        cout << a << " ";
    }
    cout << endl;
}

void printArray(array <char, arraySize> &angka){
    for(char &a : angka){
        cout << a << " ";
    }
    cout << endl;
}

int main()
{
    array <int, arraySize> angka = {1,6,7,3,8,2,0,5,9,4};
    array <char, arraySize> huruf = {'a','g','h','b','i','k','l','b','d','c'};

    printArray(angka);
    printArray(huruf);
    cout << endl;

    // sort berguna untuk mengurutkan data
    sort(angka.begin(), angka.end());
    printArray(angka);
    sort(huruf.begin(), huruf.end());
    printArray(huruf);
    return 0;
}
