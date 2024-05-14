#include <iostream>

using namespace std;

int main(){

    string password;

    cout << "===========================================" << endl;
    cout << "=================== Login =================" << endl;
    cout << "===========================================\n" << endl;
    cout << "Masukan Password: ";
    cin >> password;

    if(password == "kopi"){
        cout << "Selamat Datang Ngab!!1" << endl;
    } else {
        cout << "Password Salah, Coba Lagi!!" << endl;
    }

    cout << "\n===========================================" << endl;
    cout << "Terima Kasih Telah Menggunakan Aplikasi Ini" << endl;
    cout << "===========================================" << endl;
    cin.get();
    return 0;
}
