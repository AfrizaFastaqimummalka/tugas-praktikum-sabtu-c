#include <stdio.h>

int main() 
  {
    int N;
    // Langkah 2
    printf("Masukkan nilai N: ");
    scanf("%d", &N);
    
    // Langkah 3
    if (N > 50) {
        // Langkah 4
        N = N + 10;
    } else {
        // Langkah 5
        N = N - 25;
    }
    
    // Langkah 6
    printf("Nilai N setelah perubahan: %d\n", N);
    
    // Langkah 7
    return 0;
}
