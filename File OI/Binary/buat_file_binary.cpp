#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// CARA BUAT FILE BINARY

int main()
{
	fstream myFile;
	int number = 123567890;
	string Hai = "Ini cara penulisan dan baca fiel binary";
	
	myFile.open("Percobaan 6.bin", ios::out | ios::binary);
	
	myFile.write(reinterpret_cast<char*>(&number), sizeof(number));
	
	myFile.close();
	
	return 0;
}


