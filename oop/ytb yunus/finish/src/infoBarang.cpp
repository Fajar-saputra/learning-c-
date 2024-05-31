#include "../include/myClass/Prosesor.hpp"
#include "../include/myClass/Ram.hpp"
#include "../include/myClass/Penjual.hpp"
#include "../include/myClass/Pembeli.hpp"

#include <iostream>
#include <vector>

void tampilkanSemuaBarang(const std::vector<Prosesor*>& daftarBarang) {
    for (const auto& barang : daftarBarang) {
        barang->infoBarang();
    }
}