#include <stdio.h>

struct Barang {
    char nama[30];
    float harga;
    float diskon; // dalam persen
};

int main() {
    struct Barang daftar[3] = {
        {"CPU 850Mhz", 700000, 5},
        {"RAM 128 Mhz", 380000, 10},
        {"Motherboard PIII", 800000, 8}
    };

    float total = 0;

    printf("---------------------------------------------------------------\n");
    printf("%-3s %-20s %-12s %-8s %-12s\n", "No", "Nama Barang", "Harga", "Diskon", "Jumlah");
    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < 3; i++) {
        float jumlah = daftar[i].harga - (daftar[i].harga * daftar[i].diskon / 100);
        total += jumlah;

        printf("%-3d %-20s Rp%-10.0f %-7.0f%% Rp%-10.0f\n",
               i + 1,
               daftar[i].nama,
               daftar[i].harga,
               daftar[i].diskon,
               jumlah);
    }

    printf("---------------------------------------------------------------\n");
    printf("Total yang harus dibayar: Rp%.0f\n", total);
    printf("---------------------------------------------------------------\n");

    return 0;
}