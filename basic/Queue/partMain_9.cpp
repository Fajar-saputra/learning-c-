#include <iostream>
#define max 3
using namespace std;

struct data{
	string nama,warna,jumlah;
};

data buah[max];
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
			cout << "Input" << endl;
			printf("-------------\n");
			cin.ignore();
			cout<<"Nama buah   : "; getline(cin,buah[pos].nama);
			cout<<"Warna buah  : "; getline(cin,buah[pos].warna);
			cout<<"Warna jumlah: "; getline(cin,buah[pos].jumlah);
			pos++;
		}
}

void view(){
	if(!isEmpty()){
		cout << "Data buah" << endl;
		printf("------------------------------\n");
		cout << "No."<< "\t\tNama\t\tWarna\t\tJumlah"<< endl;
		for(int x = 0; x < pos; x++){
			cout << x+1 << "\t\t"<< buah[x].nama << "\t\t"<< buah[x].warna << "\t\t" << buah[x].jumlah<< endl;
		}
	} else {
		cout << "Data Kosong" << endl;
	}
	
	if(isFull()){
		cout << "Data Penuh" << endl;
	}
	
	cout << endl;
}

void del(){
	if(!isEmpty()){
		for(int x = 0; x <= pos -1; x++){
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
	
	cout<<endl;
	for(int x = 0; x < 2; x++){
		cout<<"Data buah ke "<<x+1<<endl;
		cout<<"Nama buah  : "<<buah[x].nama<<endl;
		cout<<"Warna buah : "<<buah[x].warna<<endl;
		cout<<endl;
	}
}
