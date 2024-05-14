#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int a = 100, b = 200, c = 300;
	
	
	system("cls");
	cout << "\t\tPenggunaan ios::left dan ios::right" << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << "Rata Sebelah Kiri dan set width 10   = ";
	// cara baca rata kiri >> variable >> lebar 10
	cout << left << setw(10) << a << left << setw(10) << b << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << "Rata Sebelah kanan dan set width 10  = ";
	//cara baca rata kiri >> variable >> lebar 10
	cout << right << setw(10) << a << right << setw(10) << b << endl << endl;

	cout << endl << endl;

}

