#include <iostream>
using namespace std;
int main()
{
	int pilihan;
	int lagi;
	do{
		cout << "Menu Pilihan" << endl;
		cout << "1. Entry Data" << endl;
		cout << "2. Cetak laporan" << endl;
		cout << "3. keluar" << endl;
		printf("Pilih menu 1-3 : ");
		cin >> pilihan;
		if (pilihan == 1) {
			printf("Memilih Entry Data\n");
		} else if  ( pilihan == 2 ) {
			printf("Memilih Cetak Laporan\n");
		} else if  ( pilihan == 3 ) {
			printf("Terima kasih\n");
		} else {
			printf("pilihan tidak valid\n");
		}
	} while (pilihan != 3) ;

	return 0;
}
