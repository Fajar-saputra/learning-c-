#include <iostream>
using namespace std;

int main(){
	int p;
	string nama[p];
	
	printf("Berapa jumlah siswa :");
	cin>>p;
	
	for(int i=1; i <= p; i++){
		cout << "Masukan nama ke " << i << " : ";
		cin>>nama[i];
	}
	
	printf("isi : ");
	for(int j=1; j <= p; j++){
		cout <<nama[j] << endl;
	}
	
	return 0;
}
