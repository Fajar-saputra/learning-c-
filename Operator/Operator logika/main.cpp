#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 7;

    bool hasil;

    // operator not, and , or

    //not
    cout << "Untuk Not \n";
    hasil = !(a == 7);
    cout << hasil << endl;

    // and : hasil true keduanya untuk menghasilkan 1 , and = &&
    cout << "Untuk And \n";
    hasil = (a == 5) && (b == 7); // true & true
    cout << hasil << endl;
    hasil = (a == 3) && (b == 7); // false & true
    cout << hasil << endl;
    hasil = (a == 5) && (b == 6); // true & false
    cout << hasil << endl;
    hasil = (a == 4) && (b == 4); // fale & false
    cout << hasil << endl;

    // or : jika salah satu true maka hasil true , or = ||
    cout << "Untuk Or \n";
    hasil = (a == 5) or (b == 7); // true & true
    cout << hasil << endl;
    hasil = (a == 3) or (b == 7); // false & true
    cout << hasil << endl;
    hasil = (a == 5) || (b == 6); // true & false
    cout << hasil << endl;
    hasil = (a == 4) || (b == 4); // fale & false
    cout << hasil << endl;

    return 0;
}
