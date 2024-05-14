#include <iostream>
using namespace std;

int main(){
	int besar_persegi;
	char lagi;
	
	do{
		system("cls");
		cout << "--------------------------------------" << endl;
		cout << "<<====== PROGRAM BUAT PERSEGI ======>>" << endl;
		cout << "--------------------------------------" << endl;
		cout << "Berapa Besar : ";
		cin >> besar_persegi;
		cout << endl;
		for(int i = 1; i <= besar_persegi ; i++){
			for(int j = 1; j<= besar_persegi; j++){
				cout << " * ";
			}
			cout << endl;
		}
		
		cout << "Lagi? [y/n] ";
		cin >> lagi;
	}while(lagi == 'y' | lagi == 'Y');
		
	//cout << string(5, '&'); // contoh string kalikan dengan &
}
