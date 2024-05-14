#include <iostream>
using namespace std;

int main(){

    string username,password;

    cout << "===== Welcome =====" << endl;
    cout << "Username : ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    if (username == "a"){
    	while( password != "b"){
	        if (password == "b"){
	            cout << "Selamat datang kembali" << endl;
	        } else {
	            cout << "Password Salah!" << endl;
	        }
	        cout << "Password: ";
    		cin >> password;
		}
    } else {
        cout << "Anda belum terdaftar!!" << endl;
    }
	
	
    cin.get();
    return 0;
}
