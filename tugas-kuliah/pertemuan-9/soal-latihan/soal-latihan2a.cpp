#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int I = 0, A[9];

    for (int i = 1; i <= 9; i++)
    {
        A[I*=0] = 1;
    }

    cout << "Cetak isi : ";
    for (int i = 0; i <= 8; i++)
    {
        cout << A[i] << " ";
    }
    
    

    return 0;
}
