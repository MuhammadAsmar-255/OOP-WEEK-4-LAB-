#include "Student.h"
//default constructor
Student::Student() {
	name = "Unknown";
	 rollNumber = 0;
	 cgpa = 0.0;
}
//parametrized constructor
Student::Student(string Sname, int rollN, double Cgpa) {
	name = Sname;
	rollNumber = rollN;
	cgpa = Cgpa;
}

//setters
void Student::setname(string Sname) {
	name = Sname;
}

void Student::setrollNumber(int rollN) {
	rollNumber = rollN;
}

void Student::setcgpa(double Cgpa) {
	cgpa = Cgpa;
}

//getters
string Student::getname() {
	return name;
}

int Student::getrollNumber() {
	return rollNumber;
}

double Student::getcgpa() {
	return cgpa;
}

//display

void Student::display() {
	cout << "The name of the student is " << name << " ,the roll is " << rollNumber << " and the gpa is " << cgpa << endl;
}