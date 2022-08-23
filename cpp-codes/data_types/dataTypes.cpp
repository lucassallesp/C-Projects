// This program converts a temperature from fahrenheit to celsius.
#include <iostream>

using namespace std;

int main(){
	double Ftemp, Ctemp;
	
	cout << "Enter the temperature in Fahrenheit: ";
	cin >> Ftemp;
	
	Ctemp = (Ftemp - 32) * 5/9;
	
	cout << "The temperature converted to celsius is: " << Ctemp;
	return 0;
}
