#include <iostream>
#define max 3
using namespace std;

struct dataPenduduk{
	string nama, alamat, pekerjaan;
};
dataPenduduk warga[max];
int pos = 0;


bool isFull(){
	if(pos >= max){
		return true;
	} else {
		return false;
	}
}

bool isEmpty(){
	if(pos == 0){
		return true;
	} else {
		return false;
	}
}

void add(){
	if(!isFull()){
		cout << "\t\tInput Data Warga" << endl;
		cout << "--------------------------------" << endl;
		cin.ignore();
		cout << "Nama\t\t: ";getline(cin,warga[pos].nama);
		cout << "Pekerjaan\t: "; getline(cin, warga[pos].pekerjaan);
		cout << "Alamat\t\t: ";getline(cin, warga[pos].alamat);
		pos++;
	}
}

void display(){
	if(!isEmpty()){
		cout << "Data yang di Input" << endl;
		for (int = )
	}
}

int main(){
	int pil;
	
	//enum pil{ tambah = 1, hapus, exit};
	
	
	cout << "Menu Utama\n1. Input\n2. Delete\n3. Exit\nPilih[1-3] ";
	cin >> pil;
	switch(pil){
		case 1:
			add();
		break;
		case 2:
			break;
		case 3:
			cout << "....." << endl;
			break;
		default:
			cout << "Pilih 1 - 3 " << endl;
			break;
	}	
}








