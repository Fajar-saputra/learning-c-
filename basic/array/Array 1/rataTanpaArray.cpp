#include <iostream>
using namespace std;

int main() {
	float jmlh_data,nilai,rata,total;
	printf("Masukan Mau berapa data : ");
	cin >> jmlh_data;

	for(int i = 1; i <= jmlh_data; i++) {
		cout << "Masukan nilai ke " << i << " : ";
		cin >> nilai;
		total += nilai;
	}

	printf("=============================\n");

	for(int j = 1; j <= jmlh_data; j++) {
		cout << "Nilai ke " << j << " : " << nilai << endl;
	}
	cout << "Totalnya adalah     : " << total << endl;
	rata = total/jmlh_data;
	cout << "Rata-ratanya adalah : " << rata << endl;
	printf("=============================\n");

	return 0;
}
