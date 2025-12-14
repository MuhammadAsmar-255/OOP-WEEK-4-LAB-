#include "Laptop.h"
//parametrized constructor
Laptop::Laptop(string brandName, int size, float exepense) {
	brand = brandName;
	ramSize = size;
	price = exepense;
}

//setters
void Laptop::setbrand(string brandName) {
	brand = brandName;
}
void Laptop::setramSize(int size) {
	ramSize = size;
}
void Laptop::setprice(float exepense) {
	price = exepense;
}

//getters
string Laptop::getbrand(){
		return brand;
}
int Laptop:: getramSize() {
	return ramSize;
}
float Laptop::getprice() {
	return price;
}