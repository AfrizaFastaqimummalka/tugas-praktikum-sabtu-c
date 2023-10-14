#include <stdio.h>
int main ()
{
	//Mencari luas segitiga 
	int Alas, Tinggi;
	float Luas; 
	Alas = 8; 
	Tinggi = 5; 
	
	//Menghitung luas 
	//Luas = 0.5 * Alas * Tinggi 
	Luas = 0.5 * Alas * Tinggi;
	
	//Menampilkan Hasil
	
	printf("Luas Segitiga");
	printf("\nAlas   		= %icm", Alas);
	printf("\nTinggi 		= %icm", Tinggi);
	printf("\nL      		= 0.5 * Alas * Tinggi");
	printf("\nLuas Segitga    = %.0fcm^2", Luas);
	
	return 0;
}
