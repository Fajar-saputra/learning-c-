// Apa yang tercetak jika program berikut dijalankan:
// #include<stdio.h>
// void main()
// { int I, J, T;
//     T = 0;
//     for ( I=1; I<=3; I++)
//         { for(J = I; J<=5; J++)
//             { T = T + J;
//                 printf(“%3i”, T );
//             }
//         printf(“\n);
//     }
// }


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int I, T = 0, J;

    for ( I = 1; I <= 3; I++)
    {
        for ( J = I; J <= 5; J++)
        {
            T += J;
            cout << T << " ";
        }

        cout << endl;
        }

    return 0;
}
