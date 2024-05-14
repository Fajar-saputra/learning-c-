#include <iostream>
using namespace std;

int main(){
	int jumlah_kata = 0;
	string kalimat;
	
	cout << "Masukan Sebuat Kalimat : ";
	getline(cin, kalimat);
	
	for(int i = 0; i < kalimat.length(); i++){
		if(kalimat[i] == ' '){
			jumlah_kata++;
		}
	}
	
	cout << "Ada sebanyak " << jumlah_kata << " pada kalimat tersebut" << endl;
}
