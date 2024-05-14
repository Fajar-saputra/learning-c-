# include <iostream>
using namespace std;

void urutAngka(int arr[], int n){
	for(int i = 0; i < n - 1; i++){
		int minIndex = i;
		for(int j = i + 1; j < n; j++){
			if(arr[j] < arr[minIndex]){
				minIndex = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}
}

int main(){
	int input, temp;
	int array[input];
	
	cout << "Input jumlah element array : ";
	cin >> input;
	
	for(int i = 0; i < input; i++){
		cout << "Angka ke- " << i+1 << " : ";
		cin >> array[i];
	}
	
	urutAngka(array , input);
	
	cout << "Array yang disusun : ";
	for(int i = 0; i < input; i++){ 
		cout << array[i] << " ";
	}
}
