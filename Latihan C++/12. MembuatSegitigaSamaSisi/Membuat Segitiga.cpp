#include <iostream>
using namespace std;

int main(){
	int tinggi_segitga;
	
	cout << "Masukan Tinggi Segitiga : "; cin >> tinggi_segitga;
	
	for(int i = 1; i <= tinggi_segitga; i++){
		for(int j = tinggi_segitga - 1; j >= i; j--){
			cout << " ";
		}
		
		for(int k = 1; k <= i; k++){
			cout << " *";
		}
		
		cout << endl;
	}
}
