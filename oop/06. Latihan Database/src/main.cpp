#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Mahasiswa
{
    public:
        string name;
        string nim;
        string prodi;

        Mahasiswa(string nama, string nim, string prodi)
        {
            Mahasiswa::name = nama;
            Mahasiswa::nim = nim;
            Mahasiswa::prodi = prodi;
        }

        string stringify()
        {
            return name+"\t"+nim+"\t"+prodi+'\n';
        }
};


class Dbase{
    public:
        ifstream in;
        ofstream out;
        string fileName;

        Dbase(const char* fileName)
        {
            Dbase::fileName=fileName;
        }

        void save(Mahasiswa data)
        {
            Dbase::out.open(Dbase::fileName,ios::app);
            Dbase::out<<data.stringify();
            Dbase::out.close();
        }

        void showAll()
        {
            Dbase::in.open(Dbase::fileName,ios::in);

            string nama,nim,prodi;
            int i=1;

            while (!Dbase::in.eof())
            {
                Dbase::in>>nama;
                Dbase::in>>nim;
                Dbase::in>>prodi;

                cout<<i++<<"  ";
                cout<<nama<<"\t";
                cout<<nim<<"\t";
                cout<<prodi<<endl;
            }
            cout<<endl;
            Dbase::in.close();

        }
};


int main(int argc, char const *argv[])
{
    // Variable
    Dbase database=Dbase("database.txt");
    string nama,nim,prodi;
    database.showAll();

    // Input User
    cout<<"Input Data Pribadi\n";
    cout<<"Nama\t: ";
    cin>>nama;
    cout<<"NIM\t: ";
    cin>>nim;
    cout<<"Prodi\t: ";
    cin>>prodi;
    cout<<endl;

    Mahasiswa dataPribadi = Mahasiswa(nama, nim, prodi);
    database.showAll();
    // Save data
    database.save(dataPribadi);
    return 0;
}
