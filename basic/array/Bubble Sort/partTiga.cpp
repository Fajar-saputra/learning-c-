#include <iostream>
using namespace std;

int main(){
	int array[]={5,9,1,3,4,2,7,10,6,8};
	int panjang = sizeof(array)/ sizeof(*array);
	int temp;
	
	cout << "array :\t";
	for(int i = 0; i < panjang; i++){
		cout << array[i] << " ";
	}	
	
	for(int i =0; i < panjang; i++){
		for(int j = 0; j < panjang-1; j++){
			if(array[j] > array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
		cout << endl;
		cout << "Tahap : " << i + 1 << " : ";
		for(int i = 0; i < panjang; i++){
			cout << arrayay[i] << " ";
		}
		
	}
	
	cout << endl << endl;
	cout << "Hasil : ";
	for(int i = 0; i <panjang; i++){
		cout  << arrayay[i] << " " ;
	}
}
