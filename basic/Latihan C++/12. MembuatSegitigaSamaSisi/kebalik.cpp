#include <iostream>
using namespace std;

int main(){
	int tinggi_piramida;
	
	cout << "Masukan tinggi piramida : "; cin >> tinggi_piramida;
	
	for(int i = 1; i <= tinggi_piramida; i++){
		for(int j = 2; j <= i; j++){
			cout << " ";
		}
		
		for(int k = tinggi_piramida; k >= i; k--){
			cout << " *";
		}
		
		cout << endl;
	}
	
}
