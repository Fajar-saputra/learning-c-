#include <iostream>
using namespace std;

int main(){

	int pola;
	cout << "masukan panjang pola: ";
	cin >> pola;

	cout << "Pola 1: \n";

	for (int i = 1; i <= pola; i++) {
		for(int j = 1; j <= i; j++) {
			cout << "*" ;
		}
		cout << endl;
	}

	cout << "Pola 2: \n";

	for (int i = 1; i <= pola; i++) {
		for(int j = pola; j >= i; j--) {
			cout << "*" ;
		}
		cout << endl;
	}

	cout << "Pola 3: \n";

	for (int i = 1; i <= pola; i++) {
		for(int j= 1; j < i; j++){
			cout << " ";
		}
		for(int k = pola; k >= i; k--){
			cout << "*";
		}
		cout << endl;
	}

	cout << "Pola 4: \n";

	for (int i = 1; i <= pola; i++) {
		for(int j = pola; j > i; j--){
			cout << " ";
		}
		for(int k = 1; k <= i; k++){
			cout << "*";
		}
		cout << endl;
	}

	cin.get();
	return 0;
}
