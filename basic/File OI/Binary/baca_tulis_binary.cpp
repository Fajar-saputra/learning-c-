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

DataSiswa ambilData(int posisi, fstream myFile){
	DataSiswa bufferData;
	
	myFile.seekp((posisi-1)*sizeof(DataSiswa));
	myFile.read(reinterpret_cast<char*>(&bufferData),sizeof(DataSiswa));
	
	return bufferData;
}

int main()
{
	fstream myFile;
	myFile.open("Percobaan 8.txt", ios::trunc |  ios::out | ios::in | ios::binary);
	
	DataSiswa DataSiswa1, DataSiswa2, DataSiswa3, output;
	
	DataSiswa1.no = 1235;
	DataSiswa1.absen = "01";
	DataSiswa1.nama = "Elvira";
	DataSiswa1.kelas = "X";
	
	DataSiswa2.no = 67890;
	DataSiswa2.absen = "02";
	DataSiswa2.nama = "Elfina";
	DataSiswa2.kelas = "XIII";
	
	DataSiswa3.no = 11121;
	DataSiswa3.absen = "03";
	DataSiswa3.nama = "Elvin";
	DataSiswa3.kelas = "V";
	
	myFile.write(reinterpret_cast<char*>(&DataSiswa1),sizeof(DataSiswa));
	myFile.write(reinterpret_cast<char*>(&DataSiswa2),sizeof(DataSiswa));
	myFile.write(reinterpret_cast<char*>(&DataSiswa3),sizeof(DataSiswa));
	
	output = ambilData(2,myFile);
	
	cout << output.no << endl;
	
	myFile.close();
	
	
	return 0;
}
