#include <iostream>
#include <fstream>
using namespace std;

struct daftar{
	int pk;
	string judul, tahunTerbit,id;
};

int getOption();
void checkDatabase(fstream &myFile);

void writeData(fstream &myFile,int posisi, daftar &inputDaftar){
	// cari posisi
	myFile.seekp((posisi - 1)*sizeof(daftar), ios::beg);
	myFile.write(reinterpret_cast<char*>(&inputDaftar), sizeof(daftar));
}

int getDataSize(fstream &myFile){
	int start , end;
	myFile.seekg(0, ios::beg);
	start = myFile.tellg();
	myFile.seekg(0, ios::end);
	end = myFile.tellg();
	return (end - start)/ sizeof(daftar);	
}

void addDaftar(fstream &myFile){
	daftar inputDaftar;
	
	int size = getDataSize(myFile);
	cout << "Ukuran data : " << size << endl;
//	readData(myFile, size);
	
	inputDaftar.pk = 1;
	cout << "Id\t\t: ";
	getline(cin,inputDaftar.id);
	cout << "Judul\t\t: ";
	getline(cin,inputDaftar.judul);
	cout << "Tahun Terbit\t: ";
	getline(cin,inputDaftar.tahunTerbit);
	
	// void method untuk write data >> write(myFile, posisinya , inputDaftar);
	writeData(myFile, size + 1 , inputDaftar);
}


int main(){
	
	fstream myFile;
	
	checkDatabase(myFile);
	
	char ulang;
	int pilih = getOption();
		
	enum option{
		CREATE = 1, READ, UPDATE, DELETE, FINISH, SHEACRING
	};
	
	while(pilih != FINISH){
		switch(pilih){
			case CREATE:
				cout << "Tambah Data" << endl;
				addDaftar(myFile);
			break;
			case READ:
				cout << "Tampil Data" << endl;
			break;
			case UPDATE:
				cout << "Update Data" << endl;
			break;
			case DELETE:
				cout << "Hapus Data" << endl;
			break;
			case SHEACRING:
				cout << "Cari Data" << endl;
			break;
			default:
				cout << "Pilih opsi [1-6]" << endl;
			break;
		}
		
		loop:
			cout << "Lanjut [y/n] ";
		cin >> ulang;
		if(ulang == 'y' | ulang == 'Y'){
			pilih = getOption();
		} else if (ulang == 'n' | ulang == 'N'){
			break;
		} else {
			goto loop;
		}
	}
	
	
	return 0;
}

void checkDatabase(fstream &myFile){
	myFile.open("database.bin", ios::in | ios::out | ios::binary);
	
	if(myFile.is_open()){
		cout << "Database ditemukan" << endl;
	} else {
		myFile.close();
		cout << "Database tidak ditemukan, database buat baru" << endl;
		myFile.open("database.bin", ios::in | ios::out | ios::binary | ios::trunc);
		
	}
}

int getOption(){
	int pil;
	system("cls");
	cout << "============================================" << endl;
	cout << "\t\tMenu Utama" << endl; 
	cout << "--------------------------------------------" << endl;
	cout << "1. Tambah Data\n2. Tampil Data\n3. Update Data\n4. Cari Data\n5. Keluar\nPilih Opsi [1-5] ";
	cin >> pil;
	cin.ignore();
	return pil;
}
