#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{

    int N = 0;

    cout << "Masukan N: ";
    // scanf("%i", N);
    cin >> N;

    if(N>100){
        N = N - 10;
    }

    printf("%i", N);

    return 0;
}
