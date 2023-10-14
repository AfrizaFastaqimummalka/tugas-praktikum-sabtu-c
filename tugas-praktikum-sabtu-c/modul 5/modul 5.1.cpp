#include <iostream>
using namespace std;

int main() 
{
    int jm, jk, Lb;

    
    cout << "Masukkan jam masuk : ";
    cin >> jm;
    cout << "Masukkan jam keluar: ";
    cin >> jk;

    if (jk >= jm) {
        Lb = jk - jm;
    } else {
        Lb = 12 - jm + jk;
    }

    cout << " Lama Bekerja " << Lb << " jam" << endl;

    return 0;
}

