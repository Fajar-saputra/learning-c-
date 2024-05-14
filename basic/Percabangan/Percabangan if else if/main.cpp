#include <iostream>
using namespace std;

int main(){

    int nilai;
    string grade;

    cout << "======= Program Grade Nilai =======" << endl;
    cout << "Input Nilai Akhir: ";
    cin >> nilai;

    // if percabangan
    if (nilai >= 90){
        grade = "A";
    } else if (nilai >= 80) {
        grade = "B";
    } else if (nilai >= 70) {
        grade = "C";
    } else if (nilai >= 60) {
        grade = "D";
    } else if (nilai >= 50) {
        grade = "F";
    } else {
        grade = "G\n";
    }

    cout << "Grade anda: " << grade << endl;
    cout << "===================================" << endl;
    cin.get ();
    return 0;
}
