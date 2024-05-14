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
	
	for(int i=1; i <= p; i++){
		cout << "Isi nama yang diinput " << i << " : " << nama[i] << endl;
	}
	
	return 0;
}
