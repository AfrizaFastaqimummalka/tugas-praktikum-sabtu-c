#include <iostream>
using namespace std;
int main() 
{
    double celcius, fahrenheit, reamur;

    cout<<"Masukkan suhu dalam Celsius: ";
	cin>>celcius;
	
    fahrenheit = (celcius * 9 / 5) + 32;
    reamur = celcius * 4 / 5;
    
    cout<<"Suhu dalam Fahrenheit: "<<fahrenheit<<"Fahrenheit";
    cout<<"\nSuhu dalam Reamur    : "<<reamur<<"Reamur";

    return 0;
}
