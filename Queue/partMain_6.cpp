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

void EnQueue(){
	if(!isFull()){
		cout << "Input : ";
		cin >> buah[pos];
		pos++;
	}
}

void view(){
	if(!isEmpty()){
		cout << "Antrian data" << endl;
		for(int x = 0; x < pos; x++){
			cout << x+1 << ". " << buah[x] << endl;
		}
	} else {
		cout << "Kosong" << endl;
	}
	
	if(isFull()){
		cout << "Data Penuh" << endl;
	}
	
	cout << endl;
}

void DeQueue(){
	if(!isEmpty()){
		for(int x = 0; x <= pos - 1; x++){
		buah[x] = buah[x+1];
		}
		pos--;	
	}
	
}

int main(){
	int pil;
	
	do{
		system("cls");
		view();
		cout << "Menu Utama\n1. EnQueue\n2. DeQueue\n3. Exit\nPilih [1-3] ";
		cin >> pil;
		switch(pil){
		case 1:
			EnQueue();
		break;
		case 2:
			DeQueue();
		break;
		case 3:
			cout << "\nProgram Selesai..." << endl;
		break;
		default:
			cout << "Pilih [1-3]" << endl;
		break;
		}	
	} while (pil != 3);
	
}
