#include <iostream>
#define max 5
using namespace std;
string data[max];
int top = 0;

bool isFull(){
	if(top >= max){
		return true;
	} else {
		return false;
	}
}

bool isEmpty(){
	if(top == 0){
		return true;
	} else {
		return false;
	}
}

void view (){
	if(!isEmpty()){
		cout << "Data Antrian : " << endl;
			for(int x = top - 1; x >= 0; x--){
			cout << x+1 << ". " << data[x] << endl;
			} 
		} else { 
			cout << "Antrian Kosong" << endl;
		}
	
	if(isFull()){
		cout << "Antrian Penuh" << endl;
	}
	cout << endl;
}

void enqueue(){
	if(!isFull()){
		cout << "Masukan data : ";
		cin>>data[top];
		top++;
	}
}

void dequeue(){
	if(!isEmpty()){
		for(int a = 0; a < top-1; a++){
			data[a]= data[a+1];
		}
		top--;
	}
}

int main(){
	int pil;
	//string isi;
	
	queue:
		system("cls");
		view();
		cout << "Menu Utama\n1.Enqueue\n2.Dequeue\n3.Keluar\nPilihan : "; cin>>pil;
		switch(pil){
			case 1:
				system("cls");
				enqueue();
				goto queue;
			break;
			case 2:
				system("cls");
				dequeue();
				goto queue;
			break;
			case 3:
				break;
			default:
				cout << "Pilihan Salah!" << endl;
				goto queue;
			break;
		}
		cout << "Program Selesai..." << endl;
	return 0;
}
