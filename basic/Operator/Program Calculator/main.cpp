#include <iostream>

using namespace std;

int main()
{
    int a = 100;
    float b = 9;

    float hasil;
    //operator +, -, *, /

    cout << "Masukan Nilai" << endl;

    //penjumlahan
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    //pengurangan
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;

    //pengalian
    hasil = a * b;
    cout << a << " * " << b << " = " << hasil << endl;

    //pembagian
    hasil = a / b;
    cout << a << " / " << b << " = " << hasil << endl;

    //urutan eksekusi
    hasil = a + b * b - a;
    cout << a << " + " << b << " * " << b << " - " << a << " = " <<  hasil  << endl;

    cin.get();
    return 0;
}
