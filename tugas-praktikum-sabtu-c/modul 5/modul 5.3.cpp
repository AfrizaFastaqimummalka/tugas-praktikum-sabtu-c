#include <iostream>
using namespace std;

int main() 
{
    int jamMasuk, jamKeluar, lamaParkir, biaya;

    cout << "Masukkan jam masuk: ";
    cin >> jamMasuk;
    cout << "Masukkan jam keluar: ";
    cin >> jamKeluar;
    
    if (jamKeluar >= jamMasuk) {
        lamaParkir = jamKeluar - jamMasuk;
    } else {
        lamaParkir = (12 - jamMasuk) + jamKeluar;
    }

    if (lamaParkir <= 2) {
        biaya = 2000;
    } else {
        biaya = 2000 + 500 * (lamaParkir - 2);
    }

    cout << "Lama parkir: " << lamaParkir << " jam" << endl;
    cout << "Biaya parkir: " << biaya << endl;

    return 0;
}
