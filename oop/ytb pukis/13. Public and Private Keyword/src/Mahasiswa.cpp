#include "Mahasiswa.hpp"
#include <iostream>


// Constructor selalu public
Mahasiswa::Mahasiswa(const char* name)
{
this->namaPublic = name;
this->namaPrivate = name;
}

void Mahasiswa::showDisplayPublic()
{
std::cout << "Nama : " << this->namaPublic << std::endl;
}

void Mahasiswa::showDisplayPrivate()
{
std::cout << "Nama : " << this->namaPrivate << std::endl;
}

void Mahasiswa::showPrivate()
{
std::cout << "Nama : " << this->namaPrivate << std::endl;
}