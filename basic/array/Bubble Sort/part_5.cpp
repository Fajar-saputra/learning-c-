#include <iostream>
using namespace std;

const int arr[]={5,9,1,3,4,2,7,10,6,8};
const int pj = sizeof(arr)/ sizeof(*arr);
int temp;

int urut(int arr[]);
void hasil(int arr[]);

int main(){
	int arr[]={5,9,1,3,4,2,7,10,6,8};	
	
	cout << "arr :\t";
	for(int i = 0; i < pj; i++){
		cout << arr[i] << " ";
	}	
	
	urut(arr);
	cout << endl << endl;
	hasil(arr);	
	return 0;
}

void hasil(int arr[]){
	cout << "Hasil : ";
	for(int i = 0; i <pj; i++){
		cout  << arr[i] << " " ;
	
	}
}

int urut(int arr[]){
	for(int i =0; i < pj; i++){
		int acak = 0;
		for(int j = 0; j < pj-1; j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				acak++;
			}
		}
		if(acak == 0){
			break;
		}
		cout << endl;
		cout << "Tahap : " << i + 1 << " : ";
		for(int i = 0; i < pj; i++){
			cout << arr[i] << " ";
		}
		
	}
}	

