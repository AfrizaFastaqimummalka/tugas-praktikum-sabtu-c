#include <iostream>
using namespace std;

int main() {
    // masukan variabel berupa bilangan
    int bilangan;

    // masukkan bilangan bulat positif
    cout << "Masukkan bilangan bulat positif!: ";
    cin >> bilangan;

    // Memeriksa apakah bilangan tersebut ganjil atau genap
    if (bilangan > 0) {
        if (bilangan % 2 == 0) {
            cout << "Bilangan ini adalah GENAP.\n";
        } else {
            cout << "Bilangan ini adalah GANJIL.\n";
        }
    } else {
        cout << "masukkan bilangan bulat positif.\n";
    }

    return 0;
}
