#include <iostream>
using namespace std;

int main(){
	int tinggi_segitiga = 7;
	
	for(int i = 1; i <= tinggi_segitiga; i++){
		for(int j = 1; j <= i; j++){
			cout << " "<<j; 
		}
		cout << endl;
	}
}
