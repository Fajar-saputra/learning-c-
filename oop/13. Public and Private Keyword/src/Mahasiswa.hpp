#ifndef __MAHASISWA
#define __MAHASISWA

#include <string>
#include <iostream>

class Mahasiswa{
    public:
        std::string namaPublic;

    private:
        std::string namaPrivate;

    public:
        Mahasiswa(const char *name);
        void showDisplayPublic();

        void showDisplayPrivate();

    private:
        void showPrivate();
};

#endif