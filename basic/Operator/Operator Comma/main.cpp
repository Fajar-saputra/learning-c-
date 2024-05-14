#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a,b,c;

    // sintaks biasa
    //a = 4;
    //b = 6;
    //c = a + b;

    // Ini Comma Operator c = (kondisi)
    c = (a = 4, b = 6, a+b);

    cout << "Ini angka a : " << a << endl;
    cout << "Ini angka b : " << b << endl;
    cout << "Ini angka c : " << c << endl;

    return 0;
}
