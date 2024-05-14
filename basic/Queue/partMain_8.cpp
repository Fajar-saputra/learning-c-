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

void Enqueue(){
	if(!isFull()){
		cout << "Input : ";
		cin >> buah[pos];
		pos++;
	}
}

void viewSatu(){
	if(!isEmpty()){
		cout << "Antrian Buah" << endl;
		for(int x = 0; x < pos; x++){
			cout << x+1 << ". " << buah[x] << endl;
		}
	} else {
		cout << "Antrian Kosong" << endl;
	}
	
	if(isFull()){
		cout << "Antrian Penuh" << endl;
	}
}

void viewDua(){
	if(!isEmpty()){
		cout << "Antrian Buah" << endl;
		for(int x = pos - 1; x >= 0; x--){
			cout << x+1 << ". " << buah[x] << endl;
		}
	} else {
		cout << "Antrian Kosong" << endl;
	}
	
	if(isFull()){
		cout << "Antrian Penuh" << endl;
	}
}

void del(){
	if(!isEmpty()){
		for(int x = 0; x <= pos-1; x++){
			buah[x] = buah[x+1];
		}
			pos--;
	}
}

int main(){
	int pil;
	
	do{
		system("cls");
		viewSatu();
		cout << endl;
		viewDua();
		cout << endl;
	cout << "Menu Utama\n1. Input\n2. Delete\n3. Exit\nPilih [1-3] ";
	cin >> pil;
		switch(pil){
			case 1:
				Enqueue();
			break;
			case 2:
				del();
			break;
			case 3:
				cout << "\nProgram selesai..." << endl;
			break;
			default:
			break;
		}
	}while(pil != 3);
		
}
