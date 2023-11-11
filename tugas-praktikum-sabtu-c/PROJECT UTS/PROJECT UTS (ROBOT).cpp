#include <iostream>
#include <unistd.h>

using namespace std;

int main() {

    int KP[] = {6, 8, 12, 18, 24, 30, 36, 42, 49, 50};
    int JK = sizeof(KP) / sizeof(KP[0]);
    int waktu[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Tombol Start ditekan. Motor listrik utama aktif dan berputar 180 derajat." << endl;

    for (int i = 0; i < JK; i++) {
        int nilai_tengah = KP[i] / 2;
        
        cout << "Masukkan ketebalan pengelasan secara manual pada array dan hitung nilai tengahnya: ";
        cin >> nilai_tengah;
        cout << "Motor listrik utama berputar dan pindah ke nilai tengah " << nilai_tengah << "." << endl;
        sleep(1*2);
        cout << "Motor listrik lengan tungkai berputar 45 derajat." << endl;
        sleep(1*2);
        cout << "Motor listrik jari robot berputar mendekati objek yang akan di las." << endl;
        sleep(1*2);
        cout << "Proses pengelasan untuk ketebalan " << KP[i] << " selama " << waktu[i] << " detik." << endl;
        sleep(1*2);
        cout << "Pengelasan selesai. Proses akan berulang ke langkah 3." << endl;
    }

    return 0;
}
