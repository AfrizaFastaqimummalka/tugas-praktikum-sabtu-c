#include <iostream>

using namespace std;

int main() {
    int nilai[10];

    cout << "Masukkan 10 nilai mahasiswa:\n";
    for (int a = 0; a < 10; a++) {
        cout << "Nilai mahasiswa " << a + 1 << ": ";
        cin >> nilai[a];
    }

    cout << "\nDaftar nilai mahasiswa yang lulus:\n";
    for (int a = 0; a < 10; a++) {
        if (nilai[a] >= 60) {
            cout << "Nilai mahasiswa " << a + 1 << ": " << nilai[a] << endl;
        }
    }

    return 0;
}
