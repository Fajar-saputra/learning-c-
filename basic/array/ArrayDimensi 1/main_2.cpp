#include <iostream>
#include <array>
using namespace std;

int main() {
	const int ukuran_array;
	int array_satu_dimensi[ukuran_array];

	for(int i = 0; i < ukuran_array; i++) {
		cout << "Masukan array ke-: " << i + 1 << "= ";
		cin >> array_satu_dimensi[i];
	}


	cout << "\nArray yang anda masukan : ";
	for (int i = 0; i < ukuran_array; i++) {
		cout << array_satu_dimensi[i]<< " " ;
	}

	return 0;
}

