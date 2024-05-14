#include  <iostream>
//#include <array>
using namespace std;

void tampil(); // ARRAY BELUM DITENTUKAN OLEH USER

int main(){
	// ARRAY SUDAH DITENTUKAN
	int angka[] = {1,2,3,4,5};
	int  jum_arry = sizeof(angka)/sizeof(*angka);
	
	for(int i = 0; i< jum_arry; i++){
		cout << angka[i] << endl;
	}
	
	tampil(); // PANGGIL FUNCTION
	
	return 0;
}

void tampil(){
	int jmlh_array;
	int angka[jmlh_array];
	printf("Masukan Berapa elemen array : ");
	cin >> jmlh_array;
	
	for(int i = 0; i < jmlh_array; i++){
		cout << "Masukan index ke-" << i << " : ";
		cin >> angka[i];
	}
	
	printf("\n======================================\n");
	for(int i = 0; i < jmlh_array; i++){
		cout << "Index ke- " << i << " : " << angka[i] << endl;
	}
	printf("======================================\n");
}
