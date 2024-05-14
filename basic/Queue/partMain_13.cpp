#include <iostream>
#define max 4
using namespace std;

string buah[max];
int pos = 0;
char loop;

void view(){
	system("cls");
	if(pos > 0){
		cout << "Data Tersimpan" << endl;
		for(int i = 0; i < pos; i++){
			cout << i+1 << ". " << buah[i] << endl;
		}
	} else {
		cout << "Data Kosong" << endl;
	}
}

void add(){
	do{
		view();
		if(pos < max){
			cin.ignore();
			cout << "Nama buah : ";
			getline(cin, buah[pos]);
			pos++;
			view();
			cout << "Lagi? [y/t] ";
			cin >> loop;
		} else {
			cout << "\t--- DATA PENUH ---" << endl;
			cout << "Kembali [t] ";
			cin >> loop;
		}
	} while (loop != 't');
}

void edt(){
	int y;
	
	do{
		view();
		if(pos > 0){
			cout << "Ubah data ke : ";
			cin >> y;
			cin.ignore();
			cout << "Ubah menjadi : ";
			getline(cin, buah[y-1]);
			view();
		} else {
			cout << "Tidak ada data" << endl;
		}
		cout << "lagi? [y/t] ";
		cin >> loop;
	}while( loop == 'y');
}

void del(){
	int noDihapus;
	
	do{
		view();
		if(pos > 0){
			cout << "Hapus No. ";
			cin >> noDihapus;
			for (int i = noDihapus; i < pos; i++){
				buah[i]= buah[i+1];
			}
			pos--;
			view();
			cout << "Ulang[y/t] ";
			cin >> loop;
		}else {
			cout << "Data Kosong " << endl;
			cout << "Kembali [t] ";
			cin >> loop;
		}
	}while(loop == 'y');
}

int main(){
	int pil;
	
	
	do{
		system("cls");
		cout << "Menu Utama\n1. Tambah\n2. Ubah\n3. Hapus\n4. Tampil\n5. Keluar\nPilih [1-5] ";
		cin >> pil;
		switch(pil){
			case 1:
				add();
			break;
			case 2:
				edt();
			break;
			case 3:
				del();
			break;
			case 4:
				do{
					view();
					cout << "Kembali [y] ";
					cin >> loop;
				} while (loop != 'y');
			break;
			case 5:
				cout << "<\n---- Program Selesai ---->" <<endl;
			break;
			default:
				cout << "<Pilih 1 - 5" <<endl;
			break;
		}
	} while (pil != 5);
	
}
