#include <iostream>
using namespace std;

int main(){
	int jmlhIndex;
	int angka[jmlhIndex];
	printf("Masukan Berapa Index : ");
	cin >> jmlhIndex;
	
	for(int a = 0; a < jmlhIndex; a++){
		cout << "Index Ke " << a << " : ";
		cin >> angka[a];
	}
	
	printf("Hasil \n");
	
	
	
	for(int b =0; b < jmlhIndex; b++){
		cout << angka[b] << " ";
	}
}
