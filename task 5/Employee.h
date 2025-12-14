#include<iostream>
using namespace std;
class Employee {
private:
	//delecraing variabels 
	string empName;
	string Designation;
	double Salary;
public:
	//default 
	Employee();
	//parametrized conatruvtor
	Employee(string employName, string desig, double salary);
	//destructive constructor
	~Employee();
	//setters
	void setempName(string employName);
	void setDesignation(string desig);
	void setSalary(double salary);
	//getters
	string getempName();
	string getDesignation();
	double getsalary();
	//display
	void display();
};