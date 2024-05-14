#include <iostream>
using namespace std;

int main(){
	int lebar, panjang;
	char lagi;
	
	do{
		system("cls");
		cout << "--------------------------------------" << endl;
		cout << "<<== PROGRAM BUAT PERSEGI PANJANG ==>>" << endl;
		cout << "--------------------------------------" << endl;
		cout << "Berapa lebar   : ";
		cin >> lebar;
		cout << "Berapa panjang : ";
		cin >> panjang;
		
		cout << endl;
		for(int i = 1; i <= lebar ; i++){
			for(int j = 1; j <= panjang; j++){
				cout << " * ";
			}
			cout << endl;
		}
		
		cout << endl;
		cout << "Lagi? [y/n] ";
		cin >> lagi;
	}while(lagi == 'y' | lagi == 'Y');
		
	//cout << string(5, '&'); // contoh string kalikan dengan &
}
