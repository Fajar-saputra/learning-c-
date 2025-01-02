#include <iostream>

// function comparasi digunakan untuk membandingkan 2 kata apakah 2 kata tersebut sama dengan mengembalikan 
// nilai 0 jika sama
// minus kata pertama lebih kecil
// plus kata pertama lebih panjang

int main ()
{
    std::string buah_1 = "apel";
    std::string buah_2 = "apel";

    int hasil_comparasi = buah_1.compare(buah_2);
    if(hasil_comparasi == 0){
        std::cout << "kata sama" << std::endl;
    } else if(hasil_comparasi > 0){
        std::cout << "kata sama" << std::endl;
    }
    return 0;
}