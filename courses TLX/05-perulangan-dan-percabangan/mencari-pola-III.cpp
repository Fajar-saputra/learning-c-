#include <iostream>
using namespace std;

int main() {
    int n = 10;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i || j == n - 1 - i) {
                cout << "*";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }

return 0;
}
