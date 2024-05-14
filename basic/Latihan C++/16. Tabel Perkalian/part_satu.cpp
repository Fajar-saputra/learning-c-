#include <iostream>
using namespace std;

int main(){
	int angka;
	
	cout << "Masukan angka : ";
	cin >> angka;
	cout << endl;
	
	cout << "Ini tabel perkalian " << angka << "1-10" << endl;
	for(int i = 1; i <= 10; i++){
		cout << i << " * " << angka << " = "<< i*angka << endl;
	}
}
