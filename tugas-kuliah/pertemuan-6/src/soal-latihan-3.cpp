#include <iostream>
using namespace std;

int main() {
    double uang = 1000000;
    int bulan = 0;
    
    while (uang < 1500000) {
        uang = uang + (uang * 0.02);
        bulan++;
    }

    cout << "Uang mencapai atau melebihi Rp. 1.500.000 pada bulan ke-" << bulan << endl;
    return 0;
}
