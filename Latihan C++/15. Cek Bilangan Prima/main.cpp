#include <iostream>
using namespace std;

int main(){
	int bilangan;
	bool angka = true;
	
	cin >> bilangan;
		
	if(bilangan == 0 | bilangan == 1){
		angka = false;		
	} else {
		for(int i = 2; i <= bilangan /2; i++){
			if(bilangan & i == 0){
				angka = false;
				break;
			}
		}
	}
	
	if(angka){
		cout << "Ini bilangan prima" << endl;
	} else {
		cout << "Ini bukan bilangan prima" << endl;
	}
}

