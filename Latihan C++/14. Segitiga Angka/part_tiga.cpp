#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int k,tinggi=10;
	cout << endl;
	for(int i = 1; i <= tinggi; i++){
		for(int j = 1; j <= i; j++){
			k++;
			cout << setw(3) <<k <<" " ;
		}
		cout << endl;
	}
}
