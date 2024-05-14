#include <iostream>
#define max 3
using namespace std;

string nama[max];
int pos = 0;

void Enqueue(){
	if(pos < max){
		cout << "Input Nama "<< endl;
		cout << "Nama : ";
		cin.ignore();
		getline(cin, nama[pos]);
		pos++;
	}
}

void display(){
	if(pos != 0){
		cout << "Data Nama" << endl;
		cout << "No.\tNama"<<endl;
		for(int i = 0; i < pos; i++){
			cout << i+1 << "\t"+nama[i] << endl;
		}
	} else {
		cout << "Data Kosong" << endl;
	}
	
	if(pos == max){
		cout << "Data Penuh" << endl;
	}
}

void del(){
	if(pos != 0){
		for (int i = 0; i < pos-1; i++){
			nama[i] = nama[i+1];
		}
		pos--;
	}
}

int main(){
	int pil;
	do{
		system("cls");
		display();
		cout << "Menu Utama\n1. EnQueue\n2. DeQueue\n3. Exit\nPilih [1-3] ";
		cin >> pil;
		switch(pil){
			case 1:
				Enqueue();
			break;
			case 2:
				del();
			break;
			case 3:
				cout << "<--- Program selesai ---->" << endl;
			break;
			default:
				cout << "Pilih 1-3" << endl;
			break;
		}
	}while( pil != 3);
	
}
