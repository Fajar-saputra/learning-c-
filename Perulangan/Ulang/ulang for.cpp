#include <iostream>
using namespace std;

int main(){
	for(int i = 3; i <= 30; i+=3){
		cout << i << " ";
	}
	
	cout << endl;
	for(int i = 1; i <= 10; i++){
		cout << i*3 << " ";
	}
	
	cout << endl;
	int i = 1;
	while(i < 5){
		cout << "Haiii " << i  << endl;
		i++;
	}
	i = 5;
	while(i >= 1){
		cout << "Haiii " << i  << endl;
		i--;
	}
	
	i = 3;
	while(i <= 30){
		cout << i << " ";
		i+=3;
	}
	cout << endl;
	i = 30;
	while(i >= 1){
		cout << i << " ";
		i-=3;
	}
}
