#include <iostream>

using namespace std;

int main()
{
    cout << "Selamat Datang di Calcutor Sederhana\n\n" << endl;

    //tipe datanya
    float a,b,hasil;
    char arimatika;

    //memasukan input dri user
    cout << "Masukan Nilai Pertama: ";
    cin >> a;
    cout << "Pilih Operato +,*,-,/: ";
    cin >> arimatika;
    cout << "Masukkan Nilai Kedua: ";
    cin >> b;

    cout << "\nHasil Perhitungan: ";
    cout << a << arimatika << b;

    if ( arimatika == '+'){
        hasil = a + b;
    } else if ( arimatika == '-'){
        hasil = a - b;
    } else if ( arimatika == '*'){
        hasil = a * b;
    } else if ( arimatika == '/'){
        hasil = a / b;
    } else {
        cout << " operator anda salah " << endl;
    }


    cout << " = " << hasil << endl;


    cin.get();
    return 0;
}
