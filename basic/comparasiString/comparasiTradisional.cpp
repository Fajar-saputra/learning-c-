#include <iostream>

// comparasi perbanding antara kata string 
// == === < > <= >= != !==

int main()
{
    std::string orang_satu = "elvin";
    std::string orang_dua = "elVini";

    // tes apakah 2 kata sama
    if(orang_dua == orang_satu){
        std::cout << "tes sama" << std::endl;
    } else {
        std::cout << "tes salah" << std::endl;
    }

    // cek apakah 2 kata mana yang panjang
    (orang_dua > orang_satu)? std::cout << "panjang kata 1" << std::endl : std::cout << "panjang kata 2" << std::endl;
    
    return 0;
}