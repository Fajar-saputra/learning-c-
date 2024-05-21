#include <iostream>
using namespace std;

class Mahasiswa
{
    public:
        string name;
        float ipk;

        Mahasiswa(string name, float ipk)
        {
            Mahasiswa::name = name;
            Mahasiswa::ipk = ipk;
        }


        // 1. Method tanpa parameter dan return
        void tampilData()
        {
            cout<< "Nama saya adalah " << name<<endl;
            cout<< "IPK saya segini " << ipk<<endl << endl;
        }

        // 2. Method dengan parameter dan tanpa return
        void ubahnama(const char* nama)
        {
            Mahasiswa::name = nama;
        }

        // 3. Method tanpa parametter dan return
        string getNama()
        {
            return Mahasiswa::name;
        }

        float getIPK()
        {
            return ipk;
        }

        // 4. Method parameter dan return
        float tambahNilai(const float &ipk)
        {
            return Mahasiswa::ipk - ipk;
        }
};



int main(int argc, char const *argv[])
{
    Mahasiswa mahasiswa1 = Mahasiswa("ucup", 4.1);
    Mahasiswa mahasiswa2 = Mahasiswa("Otong", 3.1);
    Mahasiswa mahasiswa3 = Mahasiswa("Cecep", 2.5);
    mahasiswa1.tampilData();
    mahasiswa2.tampilData();
    mahasiswa3.tampilData();
    
    mahasiswa2.ubahnama("Agus");
    mahasiswa2.tampilData();
    
    cout<<"Amil IPK " <<mahasiswa2.getIPK() <<endl;
    cout<<"Nilai " <<mahasiswa2.tambahNilai(2)<<endl;
    return 0;
}
