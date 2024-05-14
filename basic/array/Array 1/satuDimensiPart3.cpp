#include <iostream>
using namespace std;

int main(){
	int jmlh_index;
	float nilai[jmlh_index],total,rata2;
	
	cout << "Masukan jumlah index nilai : ";
	cin >> jmlh_index;
	
	for(int i = 1; i<=jmlh_index; i++){
		cout << "Masukan Nilai No. " << i << " : ";
		cin >> nilai[i];
	}
	printf("=============================\n");
	for(int j = 1; j <= jmlh_index; j++){
		cout << "Nilai ke " << j << " : " << nilai[j] << endl;
		total += nilai[j];
	}
	printf("==================================\n");
	rata2=total/jmlh_index;
	cout << "Total Nilai " << total << " Dan Rata-rata " << rata2 << endl;
	printf("==================================\n");
	return 0;
}
