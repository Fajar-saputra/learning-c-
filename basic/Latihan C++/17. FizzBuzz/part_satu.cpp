#include <iostream>
using namespace std;

int main(){
	int deret_angka;
	
	cout << "Masukan angka berapa : ";
	cin >> deret_angka;
	
	for(int i = 1; i <= deret_angka; i++ ){
		
		if(i % 3 == 0 && i % 5 == 0){
			cout << " FizzBuzz ";
		} else if(i % 3 == 0){
			cout << " Fizz ";
		} else if(i % 5== 0){
			cout << " Buzz ";
		} else {
			cout << " "<<i<<" ";
		}
	}
	
}
