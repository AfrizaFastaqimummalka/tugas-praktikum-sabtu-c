#include <iostream>
using namespace std;

int main()
{
	int a = 2;
	int TW= 100;
	int j= 0;
	
	for (int waktu = 1; waktu<=TW; waktu++){

		j+=a;
	}
	cout<<"\nJarak Tempuh "<<TW<<"detik : "<<j<<"meter."<<endl;
	
	return 0;
}
