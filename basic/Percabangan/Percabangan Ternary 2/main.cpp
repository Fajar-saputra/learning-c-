#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a,b;
    string hasil1 = "Angka pertama lebih besar daripada angka kedua",hasil2 = "Angka kedua lebih besar daripada angka pertama",output;

    printf("Silahkan masukan angka pertama : ");
    cin >> a;
    printf("Silahkan masukan angka kedua : ");
    cin >> b;
    // (kondisi)? hasil:hasil2; = ternary menghasilkan nilai boolean
    output = (a > b)? hasil1:hasil2;

    cout << output << endl;
    return 0;
}
