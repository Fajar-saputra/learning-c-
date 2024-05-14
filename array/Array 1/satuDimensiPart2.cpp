#include <iostream>
using namespace std;

int main(){
	int jmlh_arr;
	float total,rata;
	float angka[jmlh_arr];

	printf("Berapa elemen item : ");
	cin>>jmlh_arr;

	for(int a = 1; a<=jmlh_arr; a++){
		cout << "Masukan Harga ke-" << a << " : ";
		cin >> angka[a];
		total += angka[a];
	}
	
	printf("===========================\n");
	for(int b = 1; b <= jmlh_arr; b++){
		cout << "Harga yang diinputkan " <<b<<" : "<<angka[b]<< endl;
	}
	cout << "Total harganya  : Rp. " << total << endl;
	rata=total/jmlh_arr;
	cout << "Rata-rata harga : Rp. " << rata << endl;
	printf("===========================\n");
	return 0;
}

