#include <iostream>
using namespace std;

int main(){
	int jmlh_index,maks,min = 1000,nilai;
	cout << "Banyak Data = ";
	cin >> jmlh_index;
	
	for(int i = 1; i <= jmlh_index; i++){
		cout << "Masukan data ke " << i << " : ";
		cin >> nilai;
		if(i == 1){
			min = nilai;
			maks = nilai;
		} else {
			if(nilai > maks){
				maks = nilai;
			}
			if(nilai < min){
				min = nilai;
			}
		}
	}	
	
	cout << "Nilai Max : " <<maks << endl;
	cout << "Nilai Min : " << min << endl;
	
}
