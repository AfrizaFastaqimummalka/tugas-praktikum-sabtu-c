#include <iostream>
using namespace std;

int main() {
    int jamMasuk, jamKeluar, lamaParkir, biaya;

    // Meminta input dari pengguna
    cout << "Masukkan jam masuk: ";
    cin >> jamMasuk;
    cout << "Masukkan jam keluar: ";
    cin >> jamKeluar;

    // Menghitung lama parkir
    if (jamKeluar >= jamMasuk) {
        lamaParkir = jamKeluar - jamMasuk;
    } else {
        lamaParkir = (24 - jamMasuk) + jamKeluar;
    }

    // Menghitung biaya parkir
    if (lamaParkir <= 2) {
        biaya = 2000;
    } else {
        biaya = 2000 + 500 * (lamaParkir - 2);
    }

    // Menampilkan hasil
    cout << "Lama parkir: " << lamaParkir << " jam" << endl;
    cout << "Biaya parkir: " << biaya << endl;

    return 0;
}
