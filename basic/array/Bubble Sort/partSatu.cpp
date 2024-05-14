#include <iostream>
using namespace std;

int main(){
	int pj;
	
	printf("Berapa buah angka : "); 
	cin >> pj;
	cout << "Angka : ";
	
	int angka[pj];
	int temp;
	cout << "Masukan angka " << endl;
	for(int i = 0; i < pj; i++){
		cout << "Angka ke " << i+1 << " : ";
		cin>>angka[i];
	}
	cout << endl;
	
	for(int i = 0; i < pj; i++){
		int acak = 0;
		for(int j = 0; j < pj-1; j++){
			if(angka[j] >  angka[j+1]){
				temp = angka[j]	;
				angka[j] = angka[j+1];
				angka[j+1] = temp;
				acak++;
			}
		}
		
		if(acak == 0){
			break;
		}
		
		cout << endl;
		cout << "Tahap  " << i + 1 << "\t: ";
		for(int a = 0; a < pj; a++){
			cout << angka[a] << " ";
		}
	}
	
	cout << endl << endl;
	
	cout << "Hasil \t\t: ";
	for (int i = 0; i < pj; i++){
		cout << angka[i] << " ";
	}
}
