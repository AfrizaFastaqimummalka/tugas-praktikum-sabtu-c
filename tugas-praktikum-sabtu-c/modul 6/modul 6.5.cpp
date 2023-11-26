#include <iostream>

using namespace std;

int main() {
    int saldo = 1000000.0;
    int SB = 2.0;
    int JB = 10;

    for (int bulan = 1; bulan <= JB; ++bulan) {
        double bunga = saldo * (SB / 100.0);
        saldo += bunga;
    }
    cout << "Jumlah uang setelah " << JB << " bulan: Rp. " << saldo << endl;

    return 0;
}
