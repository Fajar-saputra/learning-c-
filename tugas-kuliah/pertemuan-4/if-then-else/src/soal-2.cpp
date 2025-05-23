#include <iostream>

using namespace std;

int main() {
    int nilai;
    
    cout << "Masukkan nilai ujian: ";
    cin >> nilai;
    
    if(nilai >= 60) {
        cout << "LULUS" << endl;
    } else {
        cout << "GAGAL" << endl;
    }
    
    return 0;
}
