#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	
	int Alas, Tinggi ;
	float Sm;
	
	cout<<"Masukan Alas (cm): "; 
	cin>>Alas;
	cout<<"Masukan Tinggi (cm):"; 
	cin>>Tinggi;
	
	Sm =((Alas*Alas)+(Tinggi*Tinggi));
	cout<<"Sisi Miringnya="<<Sm<<"cm";
	 
	return 0;
	
}

