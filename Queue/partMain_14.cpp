#include <iostream>
#define max 4
using namespace std;

string dataNama[max];
int pos = 0;
char loop;

int getOption();
bool isFull();
void add();
void view();
void edit();
void del();

int main(){
	int userPiih = getOption();
	
	while(userPiih != 5){
	//	userPiih = getOption();
		
		switch(userPiih){
			case 1:
				add();
			break;
			case 2:
				view();
			break;
			case 3:
				edit();
			break;
			case 4:
				del();  
			break;
			case 5:
				cout << "\n<--- Keluar --->" << endl;
			break;
			default:
				cout << "\nPilih 1 -5 " << endl;
			break;
		}
		
		 is_continue:
		
		cout << "Menu [y] ";
		cin >> loop;
		if(loop == 'y' | loop == 'Y'){
			userPiih = getOption();
		} else {
			goto is_continue;	
		}
	}
	
	
	cin.get();
	return 0;
}

bool isFull(){
	if(pos <= max){
		return true;
	} else {
		return false;
	}
}

int getOption(){
	int pilih;
	system("cls");
	cout << "1. Tambah Data Mahasiswa" << endl;
	cout << "2. Tampil Data Mahasiswa" << endl;
	cout << "3. Edit Data Mahasiswa" << endl;
	cout << "4. Hapus Data Mahasiswa" << endl;
	cout << "5. Keluar" << endl;
	cout << "Pilih [1-5] ";
	cin >> pilih;
	return pilih;
}

void add(){
	cout << endl;
	if(isFull()){
		cout << "Inputkan Nama Mahasiswa" << endl;
		cout << "-----------------------" << endl;
		cin.ignore();
		cout << "Nama : ";
		getline(cin, dataNama[pos]);
		pos++;
	} else {
		cout << "Memory Penuh" << endl;
	}
}

void view(){
	if(isFull()){
		cout << "Data Nama Mahasiswa" << endl;
		for(int i = 0; i < pos; i++){
			cout << i+1 << ". " <<  dataNama[i] << endl;
		}
	} else if(pos == 0 ) {
		cout << "Data Kosong" << endl;
	} else {
		cout << "Data Penuh" << endl;
	}
}

void edit(){
	int edit;
	system("cls");
	view();
	if(!isFull()){
		cout << "Edit No. ";
		cin >> edit;
		cin.ignore();
		cout << "Nama : ";
		getline(cin, dataNama[edit - 1]) ;
	} else {
		cout << "Data Nama Kosong" << endl;
	}
}

void del(){
	int noHapus;
	
	if(isFull()){
		cout << "Hapus No. ";
		cin >> noHapus;
		for(int i = noHapus; i < pos; i++){
			dataNama[i-1] = dataNama[i];
		}
		pos--;
	}
}
