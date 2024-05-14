#include <iostream>
using namespace std;

int luasPersegi(int p, int l)
{
    return p * l;
}

int main()
{

    int luas = luasPersegi(4, 5);

    cout << luas << endl;

    return 0;
}
