#include <iostream>
using namespace std;

int main(){
	int kolom;
	int baris;
	int nilai[baris][kolom];
	
	printf("Berapa baris \t: ");
	cin>>baris;
	printf("Berapa kolom \t: ");
	cin>>kolom;
	
	for(int x =0; x < baris; x++){
		for(int y =0; y < kolom; y++){
			cout << "Masukan isi [" << x << "][" << y << "]: ";
			cin>>nilai[x][y];
		}
	}
	
	printf("\nIsi array Multidimensi \n");
	for(int x = 0; x < baris; x++){
		for(int y=0; y < kolom; y++){
			cout << "Array Multidimensi[" << x << "][" << y << "] " << nilai[x][y]<< endl;
		}
	}
	
	return 0;
}
