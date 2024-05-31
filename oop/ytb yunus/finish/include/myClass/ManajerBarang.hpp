#ifndef MANAJERBARANG_HPP
#define MANAJERBARANG_HPP

#include "Pembeli.hpp"
#include "Penjual.hpp"
#include "Ram.hpp"
#include "Barang.hpp"
#include "Prosesor.hpp"
#include <vector>

class ManajerBarang {
public:
    void tampilkanSemuaBarang(const std::vector<Prosesor*>& daftarBarang);
};

#endif

