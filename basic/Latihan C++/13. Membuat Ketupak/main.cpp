#include <iostream>
using namespace std;

int main(){
	int lebar_belah_ketupat;
	
	cout << "Tinggi Belah ketupa : "; cin >> lebar_belah_ketupat;
	
	for(int i = 1; i <= lebar_belah_ketupat; i++){
		for(int j = lebar_belah_ketupat - 1; j >= i; j--){
			cout << " ";
		}
		for(int k = 1; k <= i; k++){
			cout << " *";
		}
		cout << endl;
	}
	
	for(int i = 1; i < lebar_belah_ketupat; i++){
		for(int k = 1; k <= i; k++){
			cout << " ";
		}
		for(int j = lebar_belah_ketupat - 1; j >= i; j--){
			cout << " *";
		}
		cout << endl;
	}
}
