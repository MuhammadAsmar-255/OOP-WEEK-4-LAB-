#include<iostream>
using namespace std;
class Laptop {
private:
	//delecraing variables to store data
	string brand;
	int ramSize = 0;
	float price = 0.0;
public:
	//declearing the class function 
	Laptop(string brandName, int size, float exepense);//parametried constructior
	//setters
	void setbrand(string brandName);
	void setramSize(int size);
	void setprice(float exepense);
	//getters
	string getbrand();
	int getramSize();
	float getprice();
};