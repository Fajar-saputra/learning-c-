#include <iostream>
#define max 3
using namespace std;
string data[max];
int posisi = 0;

bool isEmpty(); // Function
bool isFull(); // Function
void view(); // Procedure
void enqueu(); // Procedure
void dequeue(); // Procedure
void getOption(); // Procedure

int main(){
	getOption();
}

bool isEmpty(){
	if(posisi <0 ){
		return true;
	} else {
		return false;
	}
}

bool isFull(){
	if(posisi >= max){
		return true;
	} else {
		return false;
	}
}

void view(){
	if(!isEmpty()){
		cout << "Data Antrian " << endl;
		for(int x = posisi -1; x >= 0; x--){
			cout << x+1 << ". "<<data[x] << endl;
		}
	} else {
		cout << "Antrian Kosong" << endl;
	}
	
	if(isFull()){
		cout << "Data penuh" << endl;
	}
	cout << endl;
}

void enqueu(){
	if(!isFull()){
		cout << "Masukan data : ";
		cin.ignore();
		getline(cin,data[posisi]);
		posisi++;
	}
}

void dequeue(){
	if(!isEmpty()){
		for(int x = 0; x < posisi - 1; x++){
			data[x] = data[x + x];
		}
		posisi--;
	}
}

void getOption(){
	int pil;
	string isi;
	ulang:
		system("cls");
		view();
		cout << "Menu Utama\n1. Input\n2. Hapus\n3. Keluar\nPilih : ";
		cin >> pil;
	switch(pil){
		case 1:
			enqueu();
			goto ulang;
			break;
		case 2:
			dequeue();
			goto ulang;
			break;
		case 3:
			cout << "Program Selesai" << endl;
			break;
		default:
			cout << "Pilih [1-2]" << endl;
			goto ulang;
		break;
	}
}



