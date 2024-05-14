#include <iostream>
#include <string>
using namespace std;

int main()
{
    string kalimat_input;

    printf("Silakah ketik kalimat : ");
    getline(cin,kalimat_input);

    cout << "\nIni inputan anda : " << kalimat_input << endl << endl;

    // mencari jumlah kata
    int jumlah = 0;
    int posisi = 0;

    while(true){
        posisi = kalimat_input.find(" ", posisi + 1);
        jumlah++;
        if(posisi < 0){
            break;
        }
    }

    cout << "Jumlah kata yang anda masukan adalah " << jumlah << endl << endl;


    return 0;
}
