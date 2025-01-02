#include <iostream>
using namespace std;

int main()
{

	int arrayD2[5][7] = {{51,62,73,24,95,96,17},{38,49,10,11,12,13,14},{15,16,17,18,19,20,21},{22,23,24,25,26,27,28},{29,30,31,32,33,34,35}};
	
	printf("isi Array: \n");
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 7; j++){
			cout << arrayD2[i][j] << " " ;
		}
		cout << endl;
	}
	
	return 0;
}
