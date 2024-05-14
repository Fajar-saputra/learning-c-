#include <iostream>
using namespace std;

int main()
{
    int nilai[10];
    nilai[0] = 20;
    nilai[1] = 30;
    nilai[2] = 40;
    nilai[3] = 50;
    nilai[4] = 60;
    nilai[5] = 70;
    nilai[6] = 80;
    nilai[7] = 90;
    nilai[8] = 100;
    nilai[9] = 110;

    int length = sizeof(nilai) / sizeof*(nilai);
    for(int i; i < length; i++){
        printf("Nilai ke-%d: %d\n", i, nilai[i]);
        //cout << "Nili ke- " << i << ": " << nilai[i] << endl;
    }

	cout << sizeof(nilai) << endl;
	cout << sizeof*(nilai) << endl;
	cout << sizeof(nilai)/sizeof*(nilai) << endl;

    //cin.get();
    return 0;
}
