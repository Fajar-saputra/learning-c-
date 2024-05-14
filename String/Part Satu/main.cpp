#include <iostream>
#include <string>
using namespace std;

int main()
{
    // deklarasi string
    string kata("mobil");

    cout << "menampilkan data string" << endl;
    cout << kata << endl << endl;

    cout << "mengambil karakter berdasarkan index\n";
    cout << "index ke 0 : " << kata[0] << endl;
    cout << "index ke 1 : " << kata[1] << endl;
    cout << "index ke 2 : " << kata[2] << endl;
    cout << "index ke 3 : " << kata[3] << endl;
    cout << "index ke 4 : " << kata[4] << endl << endl;

    cout << "mengubah karakter pada index\n";
    kata[0] = 'H';
    cout << kata << endl << endl;

    cout << "menyambung 1\n";
    string kata2(kata + " fortuner");
    cout << kata2 << endl << endl;

    cout << "menyambung 2\n";
    string kata3(" bagus");
    kata2.append(kata3);
    cout << kata2 << endl << endl;

    cout << "menyambung 3\n";
    string kata4(" namun mahal");
    kata2 += kata4;
    cout << kata2 << endl << endl;


    return 0;
}
