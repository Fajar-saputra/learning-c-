#include <iostream>
using namespace std;

int main() {
    int sisi1, sisi2, sisi3;
    
    cout << "Masukkan panjang sisi 1: ";
    cin >> sisi1;
    cout << "Masukkan panjang sisi 2: ";
    cin >> sisi2; 
    cout << "Masukkan panjang sisi 3: ";
    cin >> sisi3;

    if (sisi1 == sisi2) {
        if (sisi2 == sisi3) {
            cout << "SAMA SISI" << endl;
        } else {
            cout << "SAMA KAKI" << endl;
        }
    } else {
        if (sisi1 == sisi3) {
            cout << "SAMA KAKI" << endl;
        } else {
            if (sisi2 == sisi3) {
                cout << "SAMA KAKI" << endl;
            } else {
                cout << "SEMBARANG" << endl;
            }
        }
    }

    return 0;
}
