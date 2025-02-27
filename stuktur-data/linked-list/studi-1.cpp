#include <iostream>
#include <list>
#include <string>

using namespace std;

class AnggotaPerpustakaan {
private:
    string nama;
    int nomorID;
public:
    AnggotaPerpustakaan(string n, int id) : nama(n), nomorID(id) {}
    string getNama() const { return nama; }
    int getNomorID() const { return nomorID; }
};

int main() {
    list<AnggotaPerpustakaan> daftarAnggota;

    // Menambahkan anggota perpustakaan ke dalam senarai
    daftarAnggota.push_back(AnggotaPerpustakaan("Alice", 1001));
    daftarAnggota.push_back(AnggotaPerpustakaan("Bob", 1002));
    daftarAnggota.push_back(AnggotaPerpustakaan("Charlie", 1003));

    // Menampilkan daftar anggota perpustakaan
    cout << "Daftar Anggota Perpustakaan:\n";
    for (const auto& anggota : daftarAnggota) {
        cout << "Nama: " << anggota.getNama() << ", Nomor ID: " << anggota.getNomorID() << endl;
    }

    return 0;
}