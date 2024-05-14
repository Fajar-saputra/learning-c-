#include <iostream>
using namespace std;

struct nilai{ // struck 2
	string IPA, IPS, MTK, ING;
};

struct namaSiswa{ // struck 1
	string namaPanjang,alamat,kelas,umur;
	nilai mapel; // struck 2
};

void tampilOutput();

int main(){
	namaSiswa siswaSatu;
	tampilOutput();
}

void tampilOutput(){
	namaSiswa siswaSatu;
	cout<<"Masukan Nama      : ";
	getline(cin,siswaSatu.namaPanjang);
	cout<<"Masukan alamat    : ";
	getline(cin,siswaSatu.alamat);
	cout<<"Masukan kelas     : ";
	getline(cin,siswaSatu.kelas);
	cout<<"Masukan umur      : ";
	getline(cin,siswaSatu.umur);
	cout<<"Masukan Nilai IPA : ";
	getline(cin,siswaSatu.mapel.IPA);
	cout<<"Masukan nilai IPS : ";
	getline(cin,siswaSatu.mapel.IPS);
	cout<<"Masukan nilai ING : ";
	getline(cin,siswaSatu.mapel.ING);
	cout<<"Masukan nilai MTK : ";
	getline(cin,siswaSatu.mapel.MTK);
	printf("\n=============================\n");
	cout<<"Nama\t : "<<siswaSatu.namaPanjang<< endl;
	cout<<"Kelas\t : "<<siswaSatu.kelas<< endl;
	cout<<"Kelas\t : "<<siswaSatu.alamat<< endl;
	cout<<"Umur\t : "<<siswaSatu.umur<< endl;
	cout<<"IPA\t : "<<siswaSatu.mapel.IPA<< endl;
	cout<<"IPS\t : "<<siswaSatu.mapel.IPS<< endl;
	cout<<"ING\t : "<<siswaSatu.mapel.ING<< endl;
	cout<<"MTK\t : "<<siswaSatu.mapel.MTK<< endl;
	printf("=============================\n");
}


