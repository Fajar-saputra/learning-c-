#include <iostream>
using namespace std;

struct mhs{
	string nim;
	string nama;
	int nilai;
};

char grade(int n){
	if(n > 85){
		return 'A';
	} else if ( n > 75 && n <= 85){
		return 'B';
	} else if( n > 65 && n <= 75){
		return 'C';
	} else {
		return 'D';
	}
}

int main(){
	int jumlhMahasiswa;
	mhs Mahasiswa[jumlhMahasiswa];
	cout << "Masukan jumlah Mahasiswa : ";
	cin >> jumlhMahasiswa;
	
	for(int x = 0; x < jumlhMahasiswa; x++){
		cout << "Data " << x+1 << endl;
		cout << "Nama  : "; cin>>Mahasiswa[x].nama;
		cout << "NIM   : "; cin>>Mahasiswa[x].nim;
		cout << "Nilai : "; cin>>Mahasiswa[x].nama;
		cout << endl;
	}
	
	printf("---------------------------\n");
	for(int y = 0; y < jumlhMahasiswa; y++){
		cout << "Data " << y+1 << endl;
		cout << "Nama : " << Mahasiswa[y].nama << endl;
		cout << "NIM  : " << Mahasiswa[y].nim << endl;
		cout << "Nilai: " << Mahasiswa[y].nilai << endl;
		cout << "Grade: " << grade(Mahasiswa[y].nilai) << endl;
		cout<<endl;
	}
	
}





