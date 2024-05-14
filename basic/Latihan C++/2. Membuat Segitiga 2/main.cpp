#include <iostream>
using namespace std;
int main ()
{
    int x;
    printf("Masukan baris pola : ");
    cin >> x;

    cout << "\nSegitiga sama kaki\n" << endl;
    for(int i = 1; i <= x; i++){
        for(int j = x; j > i; j--){
            cout << " ";
        }
        for(int k = 1; k <= (2*i-1); k++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nSegitiga sama kaki terbalik\n" << endl;
    for(int i = 1; i <= x; i++){
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int k = x; k >= (2*i-x); k--){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nlayang layang\n" << endl;
    for(int i = 1; i <= x; i++){
        for(int j = x; j > i; j--){
            cout << " ";
        }
        for(int k = 1; k <= (2*i-1); k++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 2; i <= x; i++){
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int k = x; k >= (2*i-x); k--){
            cout << "*";
        }
        cout << endl;
    }


    cin.get();
    return 0;
}
