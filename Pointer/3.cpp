#include <iostream>
 
using namespace std;
 
int main()
{
  string var1 = "Belajar C++ di Duniailkom";
  string *var2 = &var1;
 // referensi = mengambil alamat dan isi variable yang sama untuk variabel berbeda
 // puinter = menginput alamat dari variable lain
 // deferensi = menampilkan isi dari puinter
 
  cout << var1 << endl; // var 1 
  cout << var2 << endl; // pointer 
  cout << *var2 << endl; // deferense
 
  return 0;
}
