#include <iostream>
#define max 3
using namespace std;
struct buah{
	string nama, warna, jmlh;
};
buah buahan[max];
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

void display(){
	if(!isEmpty()){
		cout << "Data yang di Input" << endl;
		cout << "--------------------------" << endl;
		cout << "No.\tNama\tWarna\tJumlah" <<endl;
		for(int x = 0; x < pos; x++){
			cout<<x+1<<"\t"+buahan[x].nama<<"\t"+buahan[x].warna<<"\t"+buahan[x].jmlh<<endl;
		}
	} else {
			cout << "Data Kosong" << endl;
	}
	
	if(isFull()){
		cout << "Data Penuh" << endl;
	}
	
	cout << endl;
}

void Inp(){
	if(!isFull()){
		cout << "Input : " << endl;
		cout << "----------------------------" << endl;
		cin.ignore();
		cout << "Nama  : "; getline(cin, buahan[pos].nama) ;
		cout << "Warna : "; getline(cin, buahan[pos].warna) ;
		cout << "Jumlh : "; getline(cin, buahan[pos].jmlh) ;
		pos++;
	}
}

void del(){
	if(!isEmpty()){
		for(int x = 0; x < pos -1; x++){
			buahan[x] = buahan [x+1];
		}
		pos--;
	}
}

int main(){
	int pil;
	
	do{
		system("cls");
		display();
		cout << "Menu Utama\n1. Input\n2. Delete\n3. Exit\nPilih [1-3] ";
		cin >> pil;
		switch(pil){
			case 1:
				Inp();
			break;
			case 2:
				del();
			break;
			case 3:
			break;
			default:
				cout << "Pilih [1-3]" << endl;
			break;
		}	
	} while (pil != 3);
	
	cout << "\n<----- Program Selesai ----->" <<endl;
		
}
