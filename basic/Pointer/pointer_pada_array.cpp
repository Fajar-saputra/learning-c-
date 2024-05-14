#include <iostream>
#define max 5
using namespace std;

int main(){
	int array[max] = {1,2,3,4,5};
	int *pArray;
	pArray = array;

	for(int i = 0; i < max; i++){
		cout << "Isi Array [" << i<<"] : " << *pArray << endl;
		pArray++;
	}	
}
