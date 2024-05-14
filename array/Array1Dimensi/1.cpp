#include <iostream>
using namespace std;

int main()
{
    const int ukuranArray = 5;
	int array_satu_dimensi[ukuranArray];

	for(int i = 0; i < ukuranArray; i++){
        cout << "masukan array indeks ke- " << i << " adalah ";
        cin >> array_satu_dimensi[i];
	}

    cout << endl;
	for(int i = 0; i < ukuranArray; i++){
        cout << "Isi array dengan indeks ke-" << i << " adalah " << array_satu_dimensi[i] << " Alamatnya " << &array_satu_dimensi[i] << endl;
	}

	cout << endl;
	cout << "ukuran array " << sizeof(array_satu_dimensi) << endl;
	cout << "Jumlah member array " << sizeof(array_satu_dimensi)/sizeof(int) << endl;
	return 0;
}

