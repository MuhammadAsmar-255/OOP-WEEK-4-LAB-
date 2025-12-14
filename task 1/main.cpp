#include "Car.h"
int main() {

	//delecraing variables to store the user defines input
	string carname;
	int model = 0;

	//creating classes
	Car Car1;
	Car Car2;

	//getting input
	cout << "ENter the name of the car brand" << endl;
	cin >> carname;
	cout << "Enter the model year of the car" << endl;
	cin >> model;

	//setting the values to the classes
	Car2.setbrandName(carname);
	Car2.setmodelYear(model);

	//delecraing varaibles tot stoe the data from the class for display
	string nameofbrand1;
	int modelofcar1 = 0;
	string nameofbrand2;
	int modelofcar2 = 0;

	//getting the values
	nameofbrand1 = Car1.getbrandName();
	modelofcar1 = Car1.getmodelYear();
	nameofbrand2 = Car2.getbrandName();
	modelofcar2 = Car2.getmodelYear();

	//displaying the data
	cout << "The first car brand is " << nameofbrand1 << " and its model is " << modelofcar1 << endl;
	cout << "The second car brand is " << nameofbrand2 << " and its model is " << modelofcar2 << endl;
	return 0;
}