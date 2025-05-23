#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    char kodePulau;
    int kodeKota;

    cout << "Masukan kode Pulau : ";
    cin >> kodePulau;

    switch (kodePulau)
    {
    case 'j':

    cout << "Masukan kode Pulau : ";
    cin >> kodeKota;
            if (kodeKota == 1)
            {
                cout << "Jakarta" << endl;
            }
            else if(kodeKota == 2)
            {
                cout << "Surabaya" << endl;
            }
            else if(kodeKota == 3)
            {
                cout << "Bandung" << endl;
            }
            else if(kodeKota == 4)
            {
                cout << "Semarang" << endl;
            }
            else if(kodeKota == 5)
            {
                cout << "Yogyakarta" << endl;
            }
            else
            {
                cout << "Salah memasukan kode kota" << endl;
            }
            
        break;
    case  's':

         cout << "Masukan kode Pulau : ";
        cin >> kodeKota;
            if (kodeKota == 1)
            {
                cout << "Medan" << endl;
            }
            else if(kodeKota == 2)
            {
                cout << "Palembang" << endl;
            }
            else if(kodeKota == 3)
            {
                cout << "Padang" << endl;
            }
            else
            {
                cout << "Salah memasukan kode kota" << endl;
            }
            
        break;
    case  'k':
 cout << "Masukan kode Pulau : ";
    cin >> kodeKota;
            if (kodeKota == 1)
            {
                cout << "Banjarmasin" << endl;
            }
            else if(kodeKota == 2)
            {
                cout << "Pontianak" << endl;
            }
            else
            {
                cout << "Salah memasukan kode kota" << endl;
            }
            
        break;

    default:
        cout << "Data salah" << endl;
        break;
    }

    return 0;
}

