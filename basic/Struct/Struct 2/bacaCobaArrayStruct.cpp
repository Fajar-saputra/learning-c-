#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream myFile;
	string wadah;
	
	myFile.open("ujiCoba1.txt");
	if(myFile.is_open()){
		while(getline(myFile,wadah)){
			cout << wadah << endl;
		}
		myFile.close();
	} else {
		cout << "File tidak ditemukan" << endl;
	}
}
