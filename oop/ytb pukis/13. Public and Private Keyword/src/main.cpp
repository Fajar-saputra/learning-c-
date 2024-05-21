#include <string>
#include <iostream>
using namespace std;

#include "Mahasiswa.hpp"

int main(int argc, char const *argv[])
{
    Mahasiswa* mahasiswa1 = new Mahasiswa("toto");
    mahasiswa1->showDisplayPrivate();
    mahasiswa1->showDisplayPrivate();
    
    // mahasiswa1->showPrivate(); // tidak bisa karena method didalam private

    return 0;
}
