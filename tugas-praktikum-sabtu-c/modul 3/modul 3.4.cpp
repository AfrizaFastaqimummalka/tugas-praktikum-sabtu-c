#include <iostream>
using namespace std;

int main() {
    int bilangan;

    cout << "Masukkan sebuah bilangan bulat positif: "; 
	cin >> bilangan;

    if (bilangan > 0) {
        if (bilangan % 2 == 0) {
           cout<<"Bilangan tersebut adalah GENAP.\n", cin>>bilangan;
        } else {
            cout<<"Bilangan tersebut adalah GANJIL.\n", cin>>bilangan;
        }
    } else {
        cout<<"Masukkan tidak valid. Harap masukkan bilangan bulat positif.\n";
    }
    return 0;
}
