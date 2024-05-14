#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct DataSiswa{
	int no;
	string absen;
	string nama;
	string kelas;
};

int main(){
	fstream myFile;
	DataSiswa bacaData;
	
	myFile.open("Percobaan 8.txt", ios::in | ios::binary);
	
	myFile.read(reinterpret_cast<char*>(&bacaData),sizeof(DataSiswa));
	
	cout << bacaData.no << endl;
	cout << bacaData.absen << endl;
	cout << bacaData.nama << endl;
	cout << bacaData.kelas << endl;
	
	myFile.close();

	return 0;
}
