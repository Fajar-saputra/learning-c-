#include <iostream>
#define max 5
using namespace std;

string buah[max];
int pos=0;


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

void view(){
	if(!isEmpty()){
		for(int x = pos - 1; x >= 0; x--){
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

void enQueue(){
	if(!isFull()){
		cout << "Masukkan data : ";
		cin>>buah[pos];
		pos++;
	}
}

void deQueue(){
	if(!isEmpty()){
		for(int x = 0; x < pos -1; x++){
			buah[x]= buah[x+1];
		}
			pos--;
	}
}

int main(){
	int pil;
	
	ulang:
		system("cls");
		view();
		cout << "Pilih Menu\n1. EnQueue\n2. DeQueue\n3. Finish\nPilih[1-2] : "; cin>>pil;
	switch(pil){
		case 1:
			enQueue();
			goto ulang;
		break;
		case 2:
			deQueue();
			goto ulang;
			break;
		case 3:
			break;
		default: 
			cout << "Pilih [1-2]" << endl;
			goto ulang;
	}
	cout << endl;
}
