#include <iostream>
#include <string>

using namespace std;



int main(int argc, char const *argv[])
{
    int A,B,C;
    cout << "Masukan Nilai A: ";
    cin >> A;
    cout << "Masukan Nilai B: ";
    cin >> B;
    cout << "Masukan Nilai C: ";
    cin >> C;

    if (A > B && A > C)
    {
        cout << "Nilai A" << endl;
    }
    else if(B > A && B > C)
    {
        cout << "Nilai B" << endl;
    }
    else {
        cout << "Nilai C" << endl;
    }
    
    return 0;
}

