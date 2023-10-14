#include <iostream>
using namespace std;

int main ()
{
	int bilangan;
	
	cout << "Masukan bilangab bulat positif: ";
	cin >> bilangan;
	
	if (bilangan > 0){
		if (bilangan % 2 == 0) {
			cout << "Bilangan bulat ini adalah GENAP.\n";
		}else{
			cout << "Bilangan ini adalah GANJIL.\n";
		}
	}	else{
			cout << "Mohon masukan bilangan Positif.\n";
	}
		
		
	
	return 0;
}
