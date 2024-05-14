#include <iostream>
using namespace std;

int main()
{
    // Looping Bersarang
   for(int i = 1; i <=2; i++){
    cout << "Satu: " << i << "\n";


        for(int j = 1; j <= 3; j++){
            cout << "  Dua: " << j << "\n";
        }


            for(int k = 1; k <= 4; k++){
                cout << "   Tiga: " << k << "\n";
            }

                  for(int l = 1; l <= 5; l++){
                    cout << "    Empat: " << l << "\n";
                }

                        for(int m = 1; m <= 6; m++){
                        cout << "      Lima: " << m << "\n";
                    }
   }


    cin.get();
    return 0;
}
