#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;


int main() {
    string mataKuliah, sks, grade;
    int nilai;

    cout << "Mata kuliah : ";
    cin >> mataKuliah;
    cout << "SKS : ";
    cin >> sks;
    cout << "Nilai : ";
    cin >> nilai;
    if (nilai >= 90) {
        grade = "A+";
    } else if (nilai >= 80) {
            grade = "A";
    } else if (nilai >= 70) {
        grade = "B";
    } else if (nilai >= 60) {
        grade = "C";
    } else if (nilai >= 50) {
        grade = "D";
    } else {
        grade = "E";
    }


    cout << "Grade : ";
    cout << grade << endl;
    return 0;
}

