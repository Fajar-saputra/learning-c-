#include <iostream>
using namespace std;

int main(){
	const int satu = 1, dua = 1, tiga = 1;
	
	int arrayD3[satu][dua][tiga];
	
	printf("Masukan isi array 3 dimensi: \n");
	for(int i = 0; i < satu; i++){
		for(int j = 0; i < dua; j++){
			for(int k = 0; i < tiga; k++){
				cout << "ArrayD3[" << i << "][" << j << "]["<< k << "]: ";
				cin >> arrayD3[i][j][k];
			}
		}
	}
	
	for(int i = 0; i < satu; i++){
		for(int j = 0; i < dua; j++){
			for(int k = 0; i < tiga; k++){
				cout << "ArrayD3[" << i << "][" << j << "]["<< k << "] = " << arrayD3[i][j][k] << endl;
			}	
		}
	}
	
	
	return 0;
}
