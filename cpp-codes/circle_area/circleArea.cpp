#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << "Enter the circle radius: ";
	double radius;
	cin >> radius;
	
	double area = 3.14 * pow(radius,2);
	cout << "The circle area is: " << area; 
	
	return 0;
}
