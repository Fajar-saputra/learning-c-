#include <iostream>
using namespace std;

struct data{
	string nama,warna;
};

int main(){
	data buah[2];
	
	for(int x = 0; x < 2; x++){
		cout<<"Masukan buah ke "<<x+1<<endl;
		cout<<"Nama buah: "; cin>>buah[x].nama;
		cout<<"Warna buah: "; cin>>buah[x].warna;
		cout<<endl;
	}
	cout<<endl;
	for(int x = 0; x < 2; x++){
		cout<<"Data buah ke "<<x+1<<endl;
		cout<<"Nama buah  : "<<buah[x].nama<<endl;
		cout<<"Warna buah : "<<buah[x].warna<<endl;
		cout<<endl;
	}
}
