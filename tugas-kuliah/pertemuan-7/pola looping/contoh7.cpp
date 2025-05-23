#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int N = 1;
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            cout << N << " ";
            N++;
        }
        cout << endl;
    }
    
    return 0;
}
