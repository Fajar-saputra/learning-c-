#include <iostream>
using namespace std;

class Kosong{
    public:
        
};

class Isi{
    public:
        int angka_1;
};

class Data{
    public:
        string nama;
        int ipk;

        Data(const char* nama, int ipk)
        {
            Data::nama = nama;
            Data::ipk = ipk;
        }
};

int main(int argc, char const *argv[])
{
    cout << "Alokasi memori dari Class Kosong : " << sizeof(Kosong) << endl;
    cout << "Alokasi memori dari Class Isi    : " << sizeof(Isi) << endl;

    cout << "Address\n";
    string a;
    string b;
    Data Object_1 = Data("object 1", 3);
    Data* Object_2 = new Data("object 2", 4);
    string c;
    string d;

    cout << &a << endl;
    cout << &b << endl;
    cout << &Object_1 << endl;
    cout << &Object_2 << endl;
    cout << &c << endl;
    cout << &d << endl;

    return 0;
}
