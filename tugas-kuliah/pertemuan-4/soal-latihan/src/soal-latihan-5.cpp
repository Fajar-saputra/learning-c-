#include <iostream>
using namespace std;

int main() {
    int nilai1, nilai2, nilai3;
    int lulus = 0;
    
    cout << "Masukkan nilai mata kuliah 1: ";
    cin >> nilai1;
    cout << "Masukkan nilai mata kuliah 2: ";
    cin >> nilai2;
    cout << "Masukkan nilai mata kuliah 3: ";
    cin >> nilai3;

    if (nilai1 >= 60) {
        lulus++;
    }
    if (nilai2 >= 60) {
        lulus++;
    }
    if (nilai3 >= 60) {
        lulus++;
    }

    if (lulus == 3) {
        cout << "TIGA" << endl;
    } else if (lulus == 2) {
        cout << "DUA" << endl;
    } else if (lulus == 1) {
        cout << "SATU" << endl;
    } else {
        cout << "NOL" << endl;
    }

    return 0;
}
