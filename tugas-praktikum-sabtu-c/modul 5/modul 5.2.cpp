#include <iostream>
using namespace std;

int main() {
    int kode;
    char jenis;
    float harga, diskon, hargaSetelahDiskon;

    cout << "Masukkan kode: ";
    cin >> kode;
    cout << "Masukkan jenis: ";
    cin >> jenis;
    cout << "Masukkan harga: ";
    cin >> harga;

    switch (jenis) {
        case 'A':
            diskon = 0.10;
            break;
        case 'B':
            diskon = 0.15;
            break;
        case 'C':
            diskon = 0.20;
            break;
        default:
            cout << "Jenis barang tidak valid" << endl;
            return 1;
    }

    hargaSetelahDiskon = harga - (harga * diskon);

    cout << "Jenis barang " << jenis << " mendapat diskon = " << (diskon * 100) << "%, Harga setelah didiskon = " << hargaSetelahDiskon << endl;

    return 0;
}
