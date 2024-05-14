#include <iostream>
#include <string>
using namespace std;

int main()
{
    string kalimat1("Elvin suka main bola");
    string kalimat2("besok adalah hari minggu");

    cout << "1. " << kalimat1 << endl;    cout << "2. " << kalimat2 << endl;

    // substring adalah mengambil string ditengah tengah
    // substr(index,panjang)
    printf("mengambil string (substring)\n");
    cout << kalimat1.substr(6,5) << endl;
    cout << kalimat2.substr(6,6) << endl;

    // mencari posisi pada string
    cout << "posisi bola :" << kalimat1.find("bola") << endl;
    cout << "posisi hari :" << kalimat2.find("hari") << endl;

    // sesuatu jumlah beberapa posisi
    int a = kalimat1.find("a");
    cout << a << endl;
    cout << kalimat1.find("a", a + 1) << endl;

    // mencari karakter dari belakang
    cout << kalimat2.rfind("i") << endl;

    return 0;
}
