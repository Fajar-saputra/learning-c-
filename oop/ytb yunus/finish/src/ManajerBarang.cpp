#include "../include/myClass/ManajerBarang.hpp"

void ManajerBarang::tampilkanSemuaBarang(const std::vector<Prosesor*>& daftarBarang) {
    for (const auto& barang : daftarBarang) {
        barang->infoBarang();
    }
}