#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;


int main() {
    int sisi1, sisi2, sisi3;

    cin >> sisi1;
    cin >> sisi2;
    cin >> sisi3;
    if (sisi1 == sisi2 && sisi1 == sisi3 && sisi2 == sisi3) {
        cout << "Segitiga sama sisi" << endl;
    } else {
        if (sisi1 == sisi2 || sisi1 == sisi3 || sisi2 == sisi3) {
            cout << "Segitiga Sama kaki" << endl;
        } else {
            cout << "Segitiga Sembarangan" << endl;
        }
    }
    return 0;
}