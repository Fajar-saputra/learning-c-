// Apa yang tercetak jika program berikut dijalankan:
// #include<stdio.h>
// void main()
// {    int I, J, T;
//      T = 0;
//      for ( I=1; I<=5; I+=2)
//          { for(J = I; J<=9; J+=3)
//              { printf(“%4i”, J );
//          }
//          printf(“\n);
//      }
// }


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int I, T, J;

    for ( I = 1; I <= 5; I++)
    {
        for ( J = I; J <= 9; J++)
        {
            cout << J << " ";
        }

        cout << endl;
        }

    return 0;
}
