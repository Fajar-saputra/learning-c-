#include <iostream>
using namespace std;

int main(){
	int tinggi_segitiga ;
	
	cout << "Masukan tinggi segitiga : "; cin >> tinggi_segitiga;
	
	for(int i = 1; i <= tinggi_segitiga; i++){
		for(int j = 1; j <= i; j++){
			cout << " "<<i; 
		}
		cout << endl;
	}
}
