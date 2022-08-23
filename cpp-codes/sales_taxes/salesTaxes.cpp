// This program is a study object of math operations in C++
#include <iostream>

using namespace std;

int main() {
	const double countyTaxRate = .02, stateTaxRate = .04;
	double countyTax, stateTax;
	int sales = 95000, totalSales;
	
	countyTax = sales * countyTaxRate;
	stateTax = sales * stateTaxRate;
	
	cout << "Sales: $" << sales << endl;
	cout << "County tax: $" << countyTax << endl;
	cout << "State tax: $" << stateTax << endl;
		
	totalSales = sales - countyTax - stateTax;
	cout << "\nThe total after dicounting the taxes: $" << totalSales;
	
	return 0;	
}
