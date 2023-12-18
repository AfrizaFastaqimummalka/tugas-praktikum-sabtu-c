#include <iostream>
using namespace std;

int main() {
    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int B[12], C[12];
    int sum = 0, avg;
    int countB = 0, countC = 0;


    for (int i = 0; i < 12; i++) {
        sum += A[i];
    }
    avg = sum / 12;


    for (int i = 0; i < 12; i++) {
        if (A[i] > avg) {
            B[countB++] = A[i];
        } else {
            C[countC++] = A[i];
        }
    }
	
    cout << "\nArray A: ";
    for (int i = 0; i < 12; i++) {
        cout << A[i] << " ";
    }
	cout << "\nRata - Rata : 65";
	cout<<"\n============================================================================";
    cout << "\nArray B: ";
    for (int i = 0; i < countB; i++) {
        cout << B[i] << " ";
    }

    cout << "\nArray C: ";
    for (int i = 0; i < countC; i++) {
        cout << C[i] << " ";
    }

    return 0;
}
