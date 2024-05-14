#include <iostream>
using namespace std;

int main()
{
    char grade;

    cout << "Inputkan grade: ";
    cin >> grade;

    switch (toupper(grade))
    {
    case 'A':
        cout << "Mengagumkan" << endl;
        break;
    case 'B':
        cout << "Bagus" << endl;
        break;
    case 'C':
        cout << "Anda Lulus!!" << endl;
        break;
    case 'D':
        cout << "Anda Remidi" << endl;
        break;
    default:
        cout << "Grade Salah!!" << endl;
    }

    return 0;
}
