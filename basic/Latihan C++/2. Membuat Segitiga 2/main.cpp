#include <iostream>
using namespace std;
int main ()
{
    int loop;
    printf("Masukan baris pola : ");
    cin >> loop;

    cout << "\nSegitiga sama kaki\n" << endl;
    for(int i = 1; i <= loop; i++){
        for(int j = loop; j > i; j--){
            cout << " ";
        }
        for(int k = 1; k <= (2*i-1); k++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nSegitiga sama kaki terbalik\n" << endl;
    for(int i = 1; i <= loop; i++){
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int k = loop; k >= (2*i-loop); k--){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nlayang layang\n" << endl;
    for(int i = 1; i <= loop; i++){
        for(int j = loop; j > i; j--){
            cout << " ";
        }
        for(int k = 1; k <= (2*i-1); k++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 2; i <= loop; i++){
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int k = loop; k >= (2*i-loop); k--){
            cout << "*";
        }
        cout << endl;
    }


    cin.get();
    return 0;
}
