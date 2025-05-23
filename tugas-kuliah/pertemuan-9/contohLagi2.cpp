// Contoh 2:
// Sudah ada array satu dimensi yang dibuat dengan char A[15]. Sudah ada isinya
// dengan ilustrasi sebagai berikut:
// Susun algoritma untuk mencetak isi array tersebut tercetak dengan urutan sebagai
// berikut:

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char huruf[15] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O'};

    int index = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << huruf[index] << " ";
            index++;
        }
        cout << endl;
    }

    return 0;
}
