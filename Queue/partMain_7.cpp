#include <iostream>
#define max 5
using namespace std;
string buah[max];
int pos = 0;

bool isEmpty(){
	if(pos == 0){
		return true;
	} else {
		return false;
	}
}

bool isFull(){
	if(pos >= max){
		return true;
	} else {
		return false;
	}
}

void view1(){
	if(!isEmpty()){
		cout << "Antrian Pertama" << endl;
		for(int x = pos -1; x >= 0; x--){
			cout << x+1 << ". " << buah[x] << endl;			
		}
	} else {
		cout << "Input Kosong" << endl;
	}
	
	if(isFull()){
		cout << "Antrian Penuh" << endl;
	}
}

void view2(){
	if(!isEmpty()){
		cout << "Antrian Kedua" << endl;
		for(int x = 0; x < pos; x++){
			cout << x+1 << ". " << buah[x] << endl;
		}
	} else {
		cout << "Antrian Kosong" << endl;
	}
	
	if(isFull()){
		cout << "Antrian Penuh" << endl;
	}
	cout << endl;
}

void EnQueue(){
	if(!isFull()){
		cout << "Input : ";
		cin >> buah[pos];
		pos++;
	}
}

int main(){
	int pil;
	
	do {
		system("cls");
		view1();
		view2();
		cout << "Menu Utama\n1. Input\n2. Delete\n3. Exit\nPilih [1-3] "; cin >> pil;
		switch(pil){
			case 1:
				EnQueue();
			break;
			case 2:
				cout << "2" << endl;
			break;
			case 3:
				cout << "...." << endl;
			break;
			default:
				cout << "Pilih [1-3] " << endl;
			break;
		}	
	} while ( pil != 3);
		
}
