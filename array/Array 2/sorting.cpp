#include <iostream>
using namespace std;

int main(){
	int panjang;
	int nilai[panjang];
	int temp;
	
	printf("Masukan panjang array : "); 
	cin>>panjang;
	
	for(int x = 0; x < panjang; x++){
		printf("Silahkan masukan elemen array : ");
		cin >> nilai[x];
	}
	
	cout << "\nArray yang anda masukan : ";
    for (int i = 0; i < panjang; i++){
        cout << nilai[i]<< " " ;
    }
	
	for(int a = 1; a < panjang; a++){
		for(int b = 0; b < panjang-a; b++){
			if(nilai[b] > nilai[b+1]){
				temp = nilai[b];
				nilai[b] = nilai[b+1];
				nilai[b+1] = temp;
			}
		}
	}
	

	cout << "Hasil Sorting : ";
	for(int x = 0; x < panjang; x++){
		cout << " " << nilai[x];
	}
	
	return 0;
}
