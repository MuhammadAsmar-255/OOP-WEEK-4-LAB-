#include "Employee.h"
//deault contructor
Employee::Employee() {
	empName = "Unknown";
	Designation = "None";
	Salary = 0.0;
}

//parametrized conatructor
Employee::Employee(string employName, string desig, double salary) {
	empName = employName;
	Designation = desig;
	Salary = salary;
}

//destruictor
Employee::~Employee() {
		cout << "Farewell" << endl;
}

//setters
void Employee::setempName(string employName) {
	empName = employName;
}
void Employee::setDesignation(string desig) {
	Designation = desig;
}
void Employee::setSalary(double salary) {
	Salary = salary;
}

//getters
string Employee::getempName() {
	return  empName;
}
string Employee::getDesignation() {
	return Designation;
}
double Employee::getsalary() {
	return Salary;
}
//display
void Employee::display() {
	cout << "The name of the employee is " << empName << " ,his designation is " << Designation << " ,and his salary is " << Salary << endl;
}