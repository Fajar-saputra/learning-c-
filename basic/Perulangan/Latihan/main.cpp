#include <iostream>

using namespace std;

int main(){
    char ulangi= 'y';
    int i = -1;

    while(ulangi == 'y'){
        printf("Apakah kamu mau mengulang?\n");
        printf("Jawaban (y/t); ");
        cin >> ulangi;

        i++;

    }
    //printf("\n\nKamu mengulang sebanyak %i kali.\n");
    printf("\n\n=====================\n");
    printf("Perulangan Selesai!!\n");
    cout << "Kamu mengulang sebanyak " << i << " kali.\n" << endl;


    cin.get();
    return 0;
}
