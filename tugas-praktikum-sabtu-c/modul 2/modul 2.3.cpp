#include <stdio.h>
#include <math.h>

int main ()
{
	//Mencari Sisi Miring Segitiga Siku-Siku
	int Alas, Tinggi;
	float phytagotas; Alas, Tinggi; Alas = 4, 	Tinggi = 5;
	//Rumus Pitaghoras Sm = a2 + t2
	
	int Sm = (Alas * Alas)+(Tinggi * Tinggi);
	
	//Menampilkan Hasil
	printf("Sisi Miring");
	printf("\nAlas        = %icm", Alas);
	printf("\nTinggi      = %icm", Tinggi);
	printf("\nSm 	    = (Alas*Alas)+(Tinggi*Tinggi)");
	printf("\nSisi Miring = %.icm", Sm);
	
	return 0; 
	
}
