#include <iostream>

using namespace std;

int main(){

    int jawaban;

    cout << "Berapakah hasil 3+4" << endl;
    cout << "jawab : ";
    cin >> jawaban;

    string hasil = (jawaban == 7)? "benar" : "salah";

    cout << "Jawaban anda: " << hasil << endl;

    cin.get();
    return 0;
}
