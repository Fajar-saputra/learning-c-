#inc  lude <iostream>
#include <iomanip>
#define max 10
using namespace std;

int main(){
	string namaBarang[max];
	long hargaBarang[max], jumlhBarang[max], jmlhTotalBarang, totalHarga = 0, jumlhBayr = 0;
	
	
	cout << "--------------------------------------" << endl;
	cout << "<==== Program C++ Aplikasi Kasir ====>" << endl;
	cout << "--------------------------------------" << endl;
	cout << endl;
	
	cout << "Masukan Jumlah barang yang dibeli : ";
	cin >> jmlhTotalBarang;
	cout << endl;
	if(jmlhTotalBarang <= 0 | jmlhTotalBarang > max){
		cout << "Jumlah barang tidak " << endl;
		return 0;
	}
	
	for(int i = 0; i < jmlhTotalBarang; i++){
		cout << "Barang ke-" << i+1 << endl;
		cout << "Nama barang  : ";
		//cin.ignore();
		getline(cin >> ws, namaBarang[i]);
		cout << "Harga satuan : ";
		cin >> hargaBarang[i];
		cout << "Jumlah " << namaBarang[i] << " yang dibeli : ";
		cin >> jumlhBarang[i];
		cout << endl;
	}
	
	cout << endl;
	
	cout << "---------------------------------------------------------------" << endl;
	cout << "&&&                     Struk Pembayaran                    &&&" << endl;
	cout << "---------------------------------------------------------------" << endl;
	cout << "No\tBarang      Jumlah      Harga satuan          Sub Total" << endl;
	for (int i = 0; i < jmlhTotalBarang; i++){
		cout << setw(1) << i+1 << "\t";
		cout << left << setw(12) << namaBarang[i];
		cout << right << setw(5) << jumlhBarang[i];
		cout << setw(18) << hargaBarang[i];
		cout << setw(20) << jumlhBarang[i] * hargaBarang[i];
		cout << endl;
		totalHarga = totalHarga + (jumlhBarang[i] * hargaBarang[i]);
		
	}	
	cout << "---------------------------------------------------------------" << endl;
	cout << "Total Harga  : " << totalHarga << endl;
	cout << "Jumlah Bayar : ";
	cin >> jumlhBayr;
	
	while(jumlhBayr - totalHarga < 0 ){
		cout << "Maaf, uang anda kurang, Mohon lakukan pembayaran" << endl;
		cout << "Bayar Rp. ";
		cin >> jumlhBayr;
		cout << endl;
	}
	
	int kembalian = jumlhBayr - totalHarga;	
	cout << "Kembalian    : " << kembalian << endl;
	cout << endl;
	cout << "---------------------------------------------------------------" << endl;
	cout << "<<<=== TERIMA KASIH SUDAH BERBELANJA, DATANGLAH KEMBALI ===>>>" << endl;
	cout << "---------------------------------------------------------------" << endl;
	
	return 0;
}
