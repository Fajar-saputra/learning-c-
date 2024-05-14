#include <iostream>
using namespace std;

int main(){
	int tahun;
	
	cout << "Masukan tahunnya : ";
	cin >> tahun;
	
	if(tahun % 400 == 0){
		cout << tahun << " tahun kabiset" << endl;
	}else if ( tahun % 100 == 0){
		cout << tahun << " bukan tahun kabiset" << endl;
	}else if (tahun % 4 == 0){
		cout << tahun << " tahun kabiset" << endl;
	} else {
		cout << tahun << " bukan tahun kabiset" << endl;
	}
}
