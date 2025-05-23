#include <iostream>
#include <string>
using namespace std;

int main()
{
    int A = 25, B, C;
    B = A / 2;
    C = A - B * 2;
    printf("%i", C);
    cout << endl;

    A = B;
    B = A / 2;
    C = A - B * 2;
    printf("%i", C);
    cout << endl;

    A = B;
    B = A / 2;
    C = A - B * 2;
    printf("%i", C);
    cout << endl;
    
    return 0;
}
