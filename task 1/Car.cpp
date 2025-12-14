#include "Car.h"
Car::Car() {
	brandName = "Honda";
	modelYear = 2006;
}

void Car::setbrandName(string name) {
	brandName = name;
}

void Car::setmodelYear(int modelY) {
	modelYear = modelY;
}

string Car::getbrandName() {
	return brandName;
}

int Car::getmodelYear() {
	return modelYear;
}