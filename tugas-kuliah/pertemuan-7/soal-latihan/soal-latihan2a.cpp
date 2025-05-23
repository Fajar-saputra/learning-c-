// Susun algoritma untuk mencetak deret berikut ini:
// a.  5 5 5 5 5
//     10 10 10 10 10
//     15 15 15 15 15



#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int angka = 5;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << angka << " ";
        }

        angka += 5;
        cout << endl;
    }


    return 0;
}
