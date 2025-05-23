#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Masukkan nilai N: ";
    cin >> N;

    if (N > 50) {
        N = N - 25;
    } else {
        N = N + 10;
    }

    cout << "Hasil akhir N: " << N << endl;
    return 0;
}
