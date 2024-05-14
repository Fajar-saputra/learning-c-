#include <iostream>
using namespace std;

struct mhs{
	string nim, nama;
};

int main(){
	mhs mahasiswa[5];
	
	mahasiswa[0].nama = "Elvira Maharani";
	mahasiswa[0].nim = "23552010111";
	
	mahasiswa[1].nama = "Elvin Rahmattullah";
	mahasiswa[1].nim = "23552010112";
	
	
	cout << "Data Mahasiswa"<< endl;
	cout << "--------------"<< endl;
	cout << "Nama : " << mahasiswa[0].nama << endl;
	cout << "NIM  : " << mahasiswa[0].nim << endl;
	cout << endl;
	cout << "Nama : " << mahasiswa[1].nama << endl;
	cout << "NIM  : " << mahasiswa[1].nim << endl;
		
}
