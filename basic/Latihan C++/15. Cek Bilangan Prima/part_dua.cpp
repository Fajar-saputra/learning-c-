#include <iostream>
using namespace std;

int main(){
	int n;
	bool angka_prima = true;
	
	cout << "Masukan bilangan sembarang : ";
	cin >> n;
	
	if(n == 0 ||  n == 1){
		angka_prima = false;
	} else {
		for(int i = 0; i <= n / 2; i++){
			if(n & i == 0){
				angka_prima = false;
				break;
			}
		}
	}
	
	if(angka_prima){
		cout << "Ini bilanang prima" << endl;
	} else {
//		if(n % 2 == 0){
//			cout << "ini bilangan Genap" << endl;
//		} else {
//			cout << "Ini bilangan Ganjil" << endl;
//		}
		cout << "bukan" << endl;
	}
}
