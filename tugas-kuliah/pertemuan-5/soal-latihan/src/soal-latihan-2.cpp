#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;


int main() {
    int nilaiPertama, nilaiKedua, nilaiTiga;

    cin >> nilaiPertama;
    cin >> nilaiKedua;
    cin >> nilaiTiga;
    if (nilaiPertama >= 60 && nilaiKedua >= 60 && nilaiTiga >= 60) {
        cout << "Tiga" << endl;
    } else {
        if (nilaiPertama >= 60 && nilaiKedua >= 60 || nilaiKedua >= 60 && nilaiTiga >= 60 || nilaiKedua >= 60 && nilaiTiga >= 60) {
            cout << "Dua" << endl;
        } else {
            if (nilaiPertama >= 60 || nilaiKedua >= 60 || nilaiTiga >= 60) {
                cout << "Dua" << endl;
            } else {
                cout << "Satu" << endl;
            }
        }
    }
    return 0;
}
