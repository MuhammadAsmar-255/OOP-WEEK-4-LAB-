#include<iostream>
using namespace std;
class Car {
private:
	//decleraing variables for storing data
	string brandName;
	int modelYear = 0;
public:
	//delecraing the function statement 
	Car();
	Car(string name, int modelY);
	void setbrandName(string name);
	void setmodelYear(int modelY);
	string getbrandName();
	int getmodelYear();
};