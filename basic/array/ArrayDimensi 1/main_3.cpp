#include <iostream>
#include <array>

int main(){
    int ukuran;
    std::cout << "masukkan ukuran dari array : ";
    std::cin >> ukuran;

    int* array_dinamis = new int[ukuran];
    for(int i = 0; i < ukuran; i++){
        array_dinamis[i] = i * 10;
    }

    std::cout << "Isi dari array dinamis jika dikali 10 : ";
    for(int i = 0; i < ukuran; i++){
        std::cout << array_dinamis[i] << " ";
    }

    std::cout << std::endl;

    delete[] array_dinamis;

    std::cout << sizeof(array_dinamis) << std::endl;
    std::cout << sizeof(array_dinamis)/sizeof*(array_dinamis) << std::endl;

    int angkaTesTes[] = {1,2,3,4,5,6,7,8,9};
    std::cout << "ukuran dari angkaTesTes   : " <<  sizeof(angkaTesTes) << std::endl;
    std::cout << "jumlah elemen angkaTesTes : " << sizeof(angkaTesTes)/sizeof*(angkaTesTes) << std::endl;

    
    return 0;
}