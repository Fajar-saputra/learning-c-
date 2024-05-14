#include <iostream>
#include <string>
using namespace std;
// struck adalah kumpulan data
struct data{
             string nama;
             string alamat;
             int umur,tahunLahir,kelas;
             string sekolah;
};

void output(data murid);

int main()
{

    data murid1;
    murid1.nama = "Elvin Rahmattullah";
    murid1.umur = 14;
    murid1.tahunLahir = 2008;
    murid1.kelas = 5;
    murid1.sekolah = "SD Muhammadiyah Batukambing";

    data murid2;
    murid2.nama = "Elvira Maharani";
    murid2.umur = 18;
    murid2.tahunLahir = 2007;
    murid2.kelas = 10;
    murid2.sekolah = "SMAN 2 Ampek Nagari";

	output(murid1);
	output(murid2);

    return 0;
}

void output(data murid){
	printf("\nData Murid 2\n");
    cout << "Nama        : " << murid.nama << endl;
    cout << "Umur        : " << murid.umur << endl;
    cout << "Tahun lahri : " << murid.tahunLahir << endl;
    cout << "Kelas       : " << murid.kelas << endl;
    cout << "Sekolah     : " << murid.sekolah << endl;
}
