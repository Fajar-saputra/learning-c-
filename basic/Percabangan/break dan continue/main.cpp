#include <iostream>

using namespace std;

int main() {

    cout << "hello world!\n" << endl;

    for (int i = 0; i <= 10; i++){
        if (i == 5){
            //break;
            continue;
        }
        cout << i << endl;
    }
    cout << "akhirnya" << endl;

    cin.get();
    return 0;
}
