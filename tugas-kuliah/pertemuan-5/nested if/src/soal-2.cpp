#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int N;

    cout << "Masukan nilai N: ";

    switch (N)
    {
    case 1:
        cout << "Kurang sekali" << endl;
        break;
    case 2:
        cout << "Kurang" << endl;
        break;
    case 3:
        cout << "Cukup" << endl;
        break;
    case 4:
        cout << "Bagus" << endl;
        break;
    case 5:
        cout << "Bagus sekali" << endl;
        break;
    
    default:
        cout << "Data salah" << endl;
        break;
    }

    return 0;
}

