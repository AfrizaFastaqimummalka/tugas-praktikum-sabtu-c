#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int Alas, Tinggi ;
	float Sm, L, Kell;
	
	cout<<"Masukan Alas !"; cin>>Alas;
	cout<<"Masukan Tinggi !"; cin>>Tinggi;
	
	Sm   =((Alas*Alas)+(Tinggi*Tinggi));
	L    =0.5*Alas*Tinggi;
	Kell = Alas+Tinggi+Sm;
	
	cout<<"Luasnya    = "<<L<< "cm^2";  
	cout<<"\nKelilingnya= "<<Kell<< "cm";
	return 0;
}
