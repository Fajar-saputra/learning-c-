#include <iostream>

using namespace std;

int main(){

    cout << "=== Program Pembayaran ===" << endl;
    int total_belanja;

    cout << "Masukan total belanja: " ;
    cin >> total_belanja;

    if(total_belanja > 100000){
        cout <<"Selamat Anda Mendapatkan Voucher!!!\n" << endl;
    } else {
        cout << "Ada lagi yang mau dibeli??\n" << endl;
    }

    cout << "Terima kasih telah berbelanja ditempat kami!!!" << endl;



    cin.get();
    return 0;
}
