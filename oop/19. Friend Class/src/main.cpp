#include <iostream>
#include <string>

using namespace std;

class Persegi{
    friend class PersegiPanjang;

private:
    double sisi;

public:
    Persegi(double sisi)
    {
        this->sisi = sisi;
        }

        void luas()
        {
            int luas = this->sisi * this->sisi;
            cout << "Luas : " << luas << endl;
        }
};

class PersegiPanjang{
    private:
        double lebar;
        double panjang;

    public:
        PersegiPanjang(double lebar, double panjang){
            this->lebar = lebar;
            this->panjang = panjang;
        }

        void luas()
        {
            int luas = this->lebar * this->panjang;
            cout << "Luas : " << luas << endl;
        }

        bool isLebihPanjng(const Persegi &obj)
        {
            bool IsTrue = obj.sisi > this->panjang;
            return IsTrue;
        }

        void isLebihPanjng1(const Persegi &obj)
        {
            bool isTrue = obj.sisi > this->panjang;
            if (isTrue == true)
            {
                cout << "benar\n";
            } else{
                cout << "salah\n";
            }
        }
};

int main(int argc, char const *argv[])
{
    Persegi *persegi_kotak = new Persegi(31);
    persegi_kotak->luas();

    PersegiPanjang *persegi_kotak1 = new PersegiPanjang(63,53);
    persegi_kotak1->luas();

    cout << "Apakah Objek Persegi Panjang dari persegi : ";
    persegi_kotak1->isLebihPanjng1(*persegi_kotak);

   

    cout << endl;
    return 0;
}
