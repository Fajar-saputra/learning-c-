#include <iostream>
#define max 5
using namespace std;

string data[max];
int pos = 0;

bool isEmpty();
bool isFull();
void EnQueue();
void view();
void hapus();
void getOption(int &pil);

int main(){
	int pil;
	
	getOption(pil);
	
	cout << "Program selesai..." << endl;	
}

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
		cin >> data[pos];
		pos++;
	}
}

void view(){
	if(!isEmpty()){
		cout << "Antrian Item" << endl;
		for(int x = pos- 1; x >= 0; x--){
			cout << x+1 << ". " << data[x] << endl;
		}
	} else {
		cout << "Antrian Kosong" << endl;
	}
	
	if(isFull()){
		cout << "Antrian penuh!" << endl;
	}
}

void hapus(){
	if(!isEmpty()){
		for(int x = 0; x < pos - 1; x++){
			data[x] = data[x+1];
		}
			pos--;
	}
}

void getOption(int &pil){
	while(true){
	system("cls");
	view();
	cout << "Menu Utama\n1. Input\n2. Delete\n3. Keluar\nPilih 1-3 : ";
		cin>> pil;
		if(pil != 3){
			switch(pil){
			case 1:
				EnQueue();
				break;
			case 2:
				cout << "Hapus" << endl;
				hapus();
				break;
			case 3:
				cout << "Keluar" << endl;
				break;
			default:
				cout << "Pilih 1-3" << endl;
			}	
		} else {
			break;
		}
	}
}
