#include <iostream>
#include <list>
#include <string>

using namespace std;

class PesananOnline {
private:
    int nomorPesanan;
    string barangDipesan;
    string status;
public:
    PesananOnline(int nomor, string barang) : nomorPesanan(nomor), barangDipesan(barang), status("Menunggu") {}
    int getNomorPesanan() const { return nomorPesanan; }
    string getBarangDipesan() const { return barangDipesan; }
    string getStatus() const { return status; }
    void setStatus(string s) { status = s; }
};

int main() {
    list<PesananOnline> antrianPemesanan;

    // Menambahkan pemesanan ke dalam senarai
    antrianPemesanan.push_back(PesananOnline(1001, "Buku"));
    antrianPemesanan.push_back(PesananOnline(1002, "Elektronik"));
    antrianPemesanan.push_back(PesananOnline(1003, "Pakaian"));

    // Memproses pemesanan
    for (auto& pesanan : antrianPemesanan) {
        // Proses pemesanan...
        pesanan.setStatus("Diproses");
        cout << "Pesanan nomor " << pesanan.getNomorPesanan() << " (" << pesanan.getBarangDipesan() << ") sedang " << pesanan.getStatus() << endl;
    }

    return 0;
}