#include <iostream>
using namespace std;

int main(){
	int array[]={1,2,3,4,5};
	int temp;
	
	
	for(int x = 0; x < 5; x++){
		for(int y = 0; y < 5-1; y++){
			if(array[x] > array[x+1]){
				temp = array[x];
				array[x] = array[x+1];
				array[x+1] = temp;
			}
		}
	}
	
	for(int x = 0; x < 5; x++){
		cout << array[x] << " ";
	}
}
