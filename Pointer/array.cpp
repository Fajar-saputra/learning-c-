 #include <iostream>
#define max 5
using namespace std;

void Tampil(int bil[]);
void Max_min(int bil[]);
void CariBil(int bil[]);
int Jumlh(int bil[]);


int main(){
	int bil[max] = {63,73,26,78,11};
	
	Tampil(bil);
	Max_min(bil);
	CariBil(bil);
	Jumlh(bil);
	
	return 0;	
}

void CariBil(int bil[]){
	int bilCari, jlh = 0;
	bool ketemu;
	
	cout << "Cari bil : ";
	cin >> bilCari;
	for(int i =0; i < max; i++){
		if(bilCari == bil[i]){
			ketemu = true;
			cout << "Bilangan Ditemukan di elemen " << i << endl;
			jlh++;
		}
	}
	if(ketemu) {
			cout<<"Jumlah data : "<< jlh <<endl;
		}else{
			cout<<"Bilangan tersebut tidak ditemukan!"<<endl;
	}
}

void Tampil(int bil[]){
	cout << "Isi bil : ";
	for(int i = 0; i< max; i++){
		cout << bil[i] << " ";
	}
	cout << endl;
}

void Max_min(int bil[]){
	int maks = -1000, min = 1000;
	
	for(int i = 0; i < max; i++){
		if(bil[i] > maks){
			maks = bil[i];
		}
		if(bil[i] < min){
			min = bil[i];
		}
	}
		cout << "Nilai Maks " << maks << endl;
		cout << "Nilai Min  " << min << endl;
}

int Jumlh(int bil[]){
	int jlh = 0, rata2;
	for(int i = 0; i < max; i++){
		jlh += bil[i];
		rata2 = jlh/max;
	}
	cout << "Nilai Jumlh " << jlh << endl;
	cout << "Nilai rata2 " << rata2 << endl<<endl;
}
