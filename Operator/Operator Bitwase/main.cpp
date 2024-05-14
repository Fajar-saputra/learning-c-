#include <iostream>
#include <bitset>
#include <string>

using namespace std;
// bitwase operator
// &   AND Bitwise AND
// |   OR Bitwise inclusive OR
// ^   XOR Bitwise exclusive OR
//     NOT
// <<  SHL Shift Bits Left
// >>  SHL Shift Bits Right

void printBinary(unsigned short val, string nama){
    cout << nama << " = " << bitset<8>(val) << endl;
}

int main(){
    unsigned short a = 7, b = 10, c = a + b;

    cout << "| - Bitwise XOR" << endl;
    c = a ^ b;
    printBinary(a,"a");
    printBinary(b,"b");
    printBinary(c,"c");
    cout << "c = " << c << endl;

    cout << "\n| - Bitwise OR" << endl;
    c = a | b;
    printBinary(a,"a");
    printBinary(b,"b");
    printBinary(c,"c");
    cout << "c = " << c << endl;

    cout << "\n& - Bitwise AND" << endl;
    c = a & b;
    printBinary(a,"a");
    printBinary(b,"b");
    printBinary(c,"c");
    cout << "c = " << c << endl;

    cout << "\n>> - Bitwise SHR" << endl;
    c = b >> 3;
    printBinary(a,"a");
    printBinary(b,"b");
    printBinary(c,"c");
    cout << "c = " << c << endl;

    cout << "\n<< - Bitwise SHL" << endl;
    c = a << 1;
    printBinary(a,"a");
    printBinary(b,"b");
    printBinary(c,"c");
    cout << "c = " << c << endl;

    cout << "\n~ - NOT" << endl;
    c = ~a;
    printBinary(a,"a");
    printBinary(b,"b");
    printBinary(c,"c");
    cout << "c = " << c << endl;

    return 0;
}
