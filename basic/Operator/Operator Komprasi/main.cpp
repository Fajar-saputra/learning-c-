#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 5;
    int c = 4;
    int d = 6;
    int e = 7;


    bool hasil1,hasil2,hasil3,hasil4,hasil5,hasil6;
    //komparasi, relain expression

    // sebanding ==
    hasil1 = (a == b);
    // tidak sebanding !=
    hasil2 = (a != b);
    // kurang dari
    hasil3 = (c < d);
    // lebih dari
    hasil4 = (c > d);
    // kurang sama dari
    hasil5 = (c <= d);
    // lebih sama dari
    hasil6 = (a >= b);


    cout << hasil1 << endl;
    cout << hasil2 << endl;
    cout << hasil3 << endl;
    cout << hasil4 << endl;
    cout << hasil4 << endl;

    cin.get();
    return 0;
}
