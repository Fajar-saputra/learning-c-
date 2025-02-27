#include <iostream>
#include <fstream>
#include <array>
#include <cstdlib>
#include <string>
using namespace std;

enum Option
{
    CREATE = 1, READ, UPDATE, SORT, SEARCH, DELETE, FINISH
};

struct Rekap
{
    string id;
    string tanggal;
    string income;
    int jumlahTelur;
    int harga;
};

void pesanOk();
void pesanErr();
int getOption();
string formatRupiah(int income);
void inputDt();
int sizeDt();
void getData(Rekap data[], int size);
void readDt();
void saveDate(Rekap data[], int size);
void updateDt();
void deleteDt();
void sortJmlhTerkecil(Rekap data[], int size);
void sortJmlhTerbanyak(Rekap data[], int size);
void sortHargaTermahal(Rekap data[], int size);
void sortHargaTermurah(Rekap data[], int size);
void sortData();
void searchData();


int main()
{
    int user;
    char is_back;

    do
    { 
        user = getOption();
        switch (user)
        {
        case CREATE:
            /* code */
            inputDt();
            break;
        case READ:
            /* code */
            readDt();
            // sizeDt();
            break;
        case UPDATE:
            /* code */
            updateDt();
            break;
        case SORT:
            /* code */
            sortData();
            break;
        case SEARCH:
            /* code */
            searchData();
            break;
        case DELETE:
            /* code */
            deleteDt();
            break;
        case FINISH:
            system("cls");
            cout << endl << endl << endl;
            cout << "\t\t\tPROGRAM SELESAI!!!\n";
            cout << endl << endl << endl;
            break;
        default:
            cout << "Error : Choice 1 - 6!!!\n";
            break;
        }

        if (user == FINISH)
        {
            break;
        }
        
        cout << "Back? [y/n] ";
        cin >> is_back;
        cin.ignore();

    } while (is_back == 'y' | is_back == 'Y');
     
    return 0;
}

void pesanErr()
{
    system("cls");
    cout << endl << endl << endl;
    cout << "\t\t\tGAGAL / DATA INVALID!!!\n";
    cout << endl << endl << endl;
}
void pesanOk()
{
    system("cls");
    cout << endl << endl << endl;
    cout << "\t\t\tBERHASIL / DATA VALID!!!\n";
    cout << endl << endl << endl;
}
int getOption()
{
    int user;
    system("cls");
    cout << "=======================================================================\n";
    cout << "\t\t\tPROGRAM MENU\n";
    cout << "=======================================================================\n";
    cout << "[1] CREATE REKAP\n";
    cout << "[2] READ REKAP\n";
    cout << "[3] UPDATE REKAP\n";
    cout << "[4] SORT REKAP\n";
    cout << "[5] DELETE REKAP\n";
    cout << "[6] FINISH And SAVE\n";
    cout << "Choice [1-6] : ";
    cin >> user;
    cin.ignore();
    return user;
}
string formatRupiah(int income)
{
    string titik = ".";
    string output = to_string(income);
    int angka = output.length() - 3;
    while (angka > 0)
    {
        output.insert(angka, titik);
        angka -= 3;
    }
    return output;
}

void inputDt()
{
    // Variable yang dibutuhkan
    string tgl, bln, thn;
    int income;
    Rekap input;
    fstream database;

    system("cls");
    
    cout << "Tanggal Rekap (dd)\t: ";
    cin >> tgl;
    cout << "Bulan Rekap (mm)\t: ";
    cin >> bln;
    cout << "Tahun Rekap (yyyy)\t: ";
    cin >> thn;

    input.tanggal = tgl + '/' + bln + '/' + thn;
    input.id = tgl + bln + thn;

    cout << "Rekap Jumlh Telur\t: ";
    cin >> input.jumlahTelur;
    cout << "Rekap Harga Telur\t: ";
    cin >> input.harga;

    income = input.harga * input.jumlahTelur;
    input.income = formatRupiah(income);

    // Menyimpan input-an kedalam file .txt
    database.open("database.txt", ios::app);

    if (database.is_open())
    {
        database << input.id << "\t\t" << input.tanggal << "\t\t" << input.jumlahTelur << "\t\t" << input.harga << "\t\t" << input.income << endl;
        database.close();
        pesanOk();
    } else {
        pesanErr();
    }
}
int sizeDt()
{
    int size = 0;
    fstream database;
    Rekap data;

    database.open("database.txt", ios::in);

    if (database.is_open())
    {
        database >> data.id;
        database >> data.tanggal;
        database >> data.jumlahTelur;
        database >> data.harga;
        database >> data.income;

        while (!database.eof())
        {
            size++;
            database >> data.id;
            database >> data.tanggal;
            database >> data.jumlahTelur;
            database >> data.harga;
            database >> data.income;
        }
        database.close();
    }

    cerr << "Ukuran data : " << size << endl;
    return size;
}
void getData(Rekap data[], int size)
{
    fstream database;

    database.open("database.txt", ios::in);

    if (database.is_open())
    {
        for (int i = 0; i < size; i++)
        {
            database >> data[i].id;
            database >> data[i].tanggal;
            database >> data[i].jumlahTelur;
            database >> data[i].harga;
            database >> data[i].income;
        }
        database.close();
    } else {
        pesanErr();
    }
}
void readDt()
{
    int size = sizeDt();
    Rekap* data = new Rekap[size];
    // Rekap data[size];
    getData(data , size);

    system("cls");
    cout << "==============================================================================\n";
    cout << "\t\t\tDAFTAR ISI REKAP HARIAN\n";
    cout << "------------------------------------------------------------------------------\n";
    cout << "No. |  ID Rekap   |    Tanggal     |   Jumlah   |    Harga    |   Income\n";
    cout << "------------------------------------------------------------------------------\n";
    for (int i = 0; i < size; i++)
    {
        cout << i+1 << "   |  ";
        cout << data[i].id << "   |   ";
        cout << data[i].tanggal << "   |   " ;
        cout << data[i].jumlahTelur << "       |  Rp. ";
        cout << data[i].harga  << "   | Rp. ";
        cout << data[i].income << " |"<< endl;
    }
    
}
void saveDate(Rekap data[], int size)
{
    fstream database;

    database.open("database.txt", ios::trunc | ios::out);

    if (database.is_open())
    {
        for (int i = 0; i < size; i++)
        {
            database << data[i].id << "\t\t" << data[i].tanggal << "\t\t" << data[i].jumlahTelur << "\t\t" << data[i].harga << "\t\t" << data[i].income << endl;
        }
        database.close();
    } else 
    {
        pesanErr();
    }
}

void updateDt()
{
    string tanggalToUpdate, tglUpdate, blnUpdate, thnUpdate;
    int income;

    int size = sizeDt();
    Rekap* data = new Rekap[size];
    getData(data, size);

    system("cls");
    readDt();
    cout << endl;
    cout << "Tetikkan tanggal yang mau di update : ";
    cin >> tanggalToUpdate;
    cin.ignore();

    system("cls");
    for (int i = 0; i < size; i++)
    {
        if (data[i].tanggal == tanggalToUpdate)
        {
            cout << "------------------------------------------------------------------------------\n";
            cout << "No. |  ID Rekap   |    Tanggal     |   Jumlah   |    Harga    |   Income\n";
            cout << "------------------------------------------------------------------------------\n";
            cout << i+1 << "   |  " << data[i].id << "   |   " << data[i].tanggal << "   |   "  << data[i].jumlahTelur << "       |  Rp. " << data[i].harga  << "   | Rp. ";
            cout << data[i].income << " |"<< endl;
            cout << "==============================================================================\n";
            cout << "\t\t\t\tUPDATE REKAP HARIAN\n";
            cout << "------------------------------------------------------------------------------\n";
            cout << "Update Tanggal\t: ";
            cin >> tglUpdate;
            cout << "Update Bulan\t: ";
            cin >> blnUpdate;
            cout << "Update Tahun\t: ";
            cin >> thnUpdate;

            data[i].tanggal = tglUpdate + '/' + blnUpdate + '/' + thnUpdate;
            data[i].id = tglUpdate + blnUpdate + thnUpdate;
            cout << "Update Jumlah\t: ";
            cin >> data[i].jumlahTelur;
            cout << "Update Harga\t: ";
            cin >> data[i].harga;

            income = data[i].jumlahTelur * data[i].harga;
            data[i].income = formatRupiah(income);
        
            saveDate(data, size);
            pesanOk();
            return;
        }
    }
    pesanErr();
}
void deleteDt()
{
    string tanggalToDelete;

    int size = sizeDt();
    Rekap* data = new Rekap[size];
    getData(data , size);

    system("cls");
    readDt();
    cout << endl;
    cout << "Ketikan tanggal yang akan dihapus : ";
    cin >> tanggalToDelete;

    system("cls");
    for (int i = 0; i < size; i++)
    {
        if (data[i].tanggal == tanggalToDelete)
        {
            for (int j = i; j < size - 1; j++)
            {
                data[j].id = data[ j+1].id;
                data[j].tanggal = data[ j+1].tanggal;
                data[j].jumlahTelur = data[ j+1].jumlahTelur;
                data[j].harga = data[ j+1].harga;
                data[j].income = data[ j+1].income;
            }
            size--;

            saveDate(data, size);
            pesanOk();
            return;
        }
    }
    pesanErr();
}
void sortJmlhTerkecil(Rekap data[], int size)
{
    int i, j;
    Rekap wadah;
    
    for (int i = 1; i < size; i++)
    {
        wadah = data[i];
        j = i - 1;
        while (j >= 0 && data[j].jumlahTelur > wadah.jumlahTelur)
        {
            data[j + 1] = data[j];
            j = j - 1;
        }
        data[j + 1] = wadah;
    }
}
void sortJmlhTerbanyak(Rekap data[], int size)
{
    int i, j;
    Rekap wadah;
    
    for (int i = 1; i < size; i++)
    {
        wadah = data[i];
        j = i - 1;
        while (j >= 0 && data[j].jumlahTelur < wadah.jumlahTelur)
        {
            data[j + 1] = data[j];
            j = j - 1;
        }
        data[j + 1] = wadah;
    }
}
void sortHargaTermahal(Rekap data[], int size)
{
    int i, j;
    Rekap wadah;
    
    for (int i = 1; i < size; i++)
    {
        wadah = data[i];
        j = i - 1;
        while (j >= 0 && data[j].harga < wadah.harga)
        {
            data[j + 1] = data[j];
            j = j - 1;
        }
        data[j + 1] = wadah;
    }
}
void sortHargaTermurah(Rekap data[], int size)
{
    int i, j;
    Rekap wadah;
    
    for (int i = 1; i < size; i++)
    {
        wadah = data[i];
        j = i - 1;
        while (j >= 0 && data[j].harga > wadah.harga)
        {
            data[j + 1] = data[j];
            j = j - 1;
        }
        data[j + 1] = wadah;
    }
}
void sortIncome(Rekap data[], int size)
{
    int j, i;

    for (int i = 1; i < size; i++)
    {
        j = i - 1;

        while (j >= 0 && data[j].income < data[i].income)
        {
            data[ j+1 ] = data[j];
            j = j - 1;
        }
        data[ j + 1 ] = data[i];
    }
}



void sortData()
{
    int pilih;

    int size = sizeDt();
    Rekap* data = new Rekap[size];
    getData(data, size);

    system("cls");
    cout << "===============================================================\n";
    cout << "\t\tPilih Pengurutan Berdasarkan\n";
    cout << "---------------------------------------------------------------\n";
    cout << "[1] Berdasarkan Jumlah Telur Terbanyak\n";
    cout << "[2] Berdasarkan Jumlah Telur Terdikit\n";
    cout << "[3] Berdasarkan Harga Termahal\n";
    cout << "[4] Berdasarkan Harga Termurah\n";
    cout << "[5] Berdasarkan Income Terbanyak\n";
    cout << "[6] Berdasarkan Income Terkecil\n";
    cout << "[7] Berdasarkan Tanggal Terlama\n";
    cout << "[8] Berdasarkan Tanggal Terbaru\n";
    cout << "[9] Berdasarkan Income\n";
    cout << "[0] Gak jadi :D\n";
    cout << "Pilih [1- ] ";
    cin >> pilih;
    cin.ignore();
    
    switch (pilih)
    {
    case 1:
        sortJmlhTerbanyak(data, size);
        saveDate(data, size);
        break;
    case 2:
        sortJmlhTerkecil(data, size);
        saveDate(data, size);
        break;
    case 3:
        sortHargaTermahal(data, size);
        saveDate(data, size);
        break;
    case 4:
        sortHargaTermurah(data, size);
        saveDate(data, size);
        break;
    case 5:
        sortIncome(data, size);
        saveDate(data, size);
        break;
    case 0:
        cout << "Gak jadi :D\n";
        break;
    
    default:
        cout << "Error : Choice 1 - \n";
        break;
    }

    system("cls");
    cout << "Hasil Pengurutan Data :\n" << endl;
    cout << "Tanggal\t\t" << "ID Record\t" << "Jumlah Telur (Kg)" << "\t" << "Harga /Kg\t" << "Total Pemasukan" << endl;
    cout << "==========================================================================================" << endl;
    for ( int i=0; i<size; i++) {
        cout << data[i].tanggal << "\t" << data[i].id << "\t" << data[i].jumlahTelur << "\t\t\t"<< "Rp " << data[i].harga << "\t\t"<< "Rp " << data[i].income << endl;
    }

    cout << endl;
}
void searchData()
{
    string keyword;
    int ind= 0;

    int size = sizeDt();

    Rekap* array = new Rekap[size];

    getData(array, size);

    readDt();
    cout<<"Masukkan ID  : ";
    cin >> keyword;

    int ind_2 = 0;
    system("cls");
    cout << "Hasil Pencarian :" << endl;
    cout << "Tanggal\t\t" << "ID Record\t" << "Jumlah Telur (Kg)" << "\t" << "Harga /Kg\t" << "Total Pemasukan" << endl;
    cout << "==========================================================================================" << endl;
    for(int i=0;i<size;i++) {
        if(array[i].tanggal == keyword) {
            cout << array[i].id << "\t" << array[i].tanggal << "\t" << array[i].jumlahTelur << "\t\t\t"<< "Rp " << array[i].harga << "\t\t"<< "Rp " << array[i].income << endl;
            ind++;
        }
        
        ind_2++;
    }
    cout << endl;
    if (ind == 0){
        pesanErr();
    }else{
        cout << "berhasil\n";
    }
    cerr << "putaran : " << ind << endl;
    cerr << "putaran 2 : " << ind_2 << endl;
    cerr << "Ukuran : " << size << endl;
}