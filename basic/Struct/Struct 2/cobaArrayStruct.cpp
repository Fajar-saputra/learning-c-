#include <iostream>
using namespace std;

struct mhs{
	string nama,nim,alamat;
};

void data();

int main(){
	int max;
	mhs mahasiswa[max];
	data();	
}

void data(){
	int max;
	printf("Berapa jumlah Mahasiswa : ");
	cin>>max;	
	mhs mahasiswa[max];
	printf("Masukan data Mahasisiwa \n");
	for(int x = 0; x <max ; x++){
		cout << "Data Mahasiswa Ke " << x+1<< endl;
		cout << "Nama\t: ";
		cin>>mahasiswa[x].nama;
		cout << "NIM\t: ";
		cin>>mahasiswa[x].nim;
		cout << "Alamat\t: ";
		cin>>mahasiswa[x].alamat;
		cout << endl;
	}
	
	printf("-------------------------\n");
	for(int x = 0; x < max; x++){
		cout << "Data Mahasiswa Ke " << x+1 << endl;
		cout << "Nama\t: "<< mahasiswa[x].nama<< endl;
		cout << "NIM\t: "<< mahasiswa[x].nim<< endl;
		cout << "Alamat\t: "<< mahasiswa[x].alamat<< endl;
		cout << endl;
	}
}
