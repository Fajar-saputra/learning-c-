#include <iostream>
#include <string>
using namespace std;

int main()
{
    string kalimat_1("Elvin suka main bola, bola apa??");
    string kalimat_2("Elfita dan Elvira sedang tidur");

    printf("Kalimat Biasa\n");
    cout << "1. " << kalimat_1 << endl;
    cout << "2. " << kalimat_2 << endl << endl;

    // Swapp (tukar kalimat)
    kalimat_1.swap(kalimat_2);
    printf("Swap String\n");
    cout << "1. " << kalimat_1 << endl;
    cout << "2. " << kalimat_2 << endl << endl;

    // Replace ( mengganti string )
    kalimat_1.replace(7,3,"atau");
    kalimat_2.replace(kalimat_2.find("apa"),5, "basket!!");

    printf("Replace String\n");
    cout << "1. " << kalimat_1 << endl;
    cout << "2. " << kalimat_2 << endl << endl;

    // insert string ( menambah string )
    int a = kalimat_1.find("tidur");
    kalimat_1.insert(a," Selama 3 jam");

    printf("Insert String\n");
    cout << "1. " << kalimat_1 << endl;
    cout << "2. " << kalimat_2 << endl << endl;

    return 0;
}
