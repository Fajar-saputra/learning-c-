#include <iostream>
using namespace std;

void rekursif(int x){
	if( x < 0){
		cout<<"Ini rekursif ke "<<x<<endl;
		x--;
		rekursif(x);	
	}
	
}

int main(){
	rekursif(100);
}
