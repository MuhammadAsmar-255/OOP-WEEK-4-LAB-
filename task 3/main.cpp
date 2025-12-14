#include "Laptop.h"
int main() {

	//intilizing by parametrized constructor
	Laptop L1("HP", 16, 78000.56);
	Laptop L2("DELL", 16, 60000.15);

    //delecraing variables to store the input from the class to display
	string NameofBrand;
	int SizeofRam = 0;
	float Expenseoflap = 0.0;
	string NameofBrand1;
	int SizeofRam1 = 0;
	float Expenseoflap1 = 0.0;

	//getting the value to display
	NameofBrand=L1.getbrand();
	SizeofRam = L1.getramSize();
	Expenseoflap = L1.getramSize();
	NameofBrand1 = L2.getbrand();
	SizeofRam1 = L2.getramSize();
	Expenseoflap1 = L2.getramSize();

	//displaying the data
	cout << "The first laptop brand is " << NameofBrand << " ,ram size is " << SizeofRam << " and the price is " << Expenseoflap << endl;
	cout << "The second laptop brand is " << NameofBrand1 << " ,ram size is " << SizeofRam1 << " and the price is " << Expenseoflap1 << endl;

	return 0;
}