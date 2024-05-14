#include <iostream>
using namespace std;

int main(){
	int x,y;
	int *px;
	
	x = 38;
	y = 45;
	px = &x;
	
	
	
	cout << "Ini nilai x : " <<x<< endl;
	cout << "Ini nilai y : " <<y<< endl;
	cout << "alamat x    : " <<&x<< endl;
	cout << "alamat px   : " <<px<< endl;
	cout << "Ini nilai px : " <<*px<< endl;
	cout << endl;
	
	x = 88;
	cout << "Ini nilai x : " <<x<< endl;
	cout << "Ini nilai y : " <<y<< endl;
	cout << "alamat x    : " <<&x<< endl;
	cout << "alamat px   : " <<px<< endl;
	cout << "Ini nilai px : " <<*px<< endl;
	cout << endl;
	
	int b, *pb, **ppb;
	
	b = 5;
	pb = &b;
	ppb = &pb;
	cout << "Ini nilai b   : " << b<< endl;
	cout << "Ini nilai pb  : " << *pb<< endl;
	cout << "Ini nilai ppb : " << **ppb<< endl;
	cout << "alamat b      : " << &b<< endl;
	cout << "alamat pb     : " << &pb<< endl;
	cout << "alamat ppb    : " << &ppb<< endl;
}
