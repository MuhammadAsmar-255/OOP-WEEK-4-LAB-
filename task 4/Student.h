#include<iostream>
using namespace std;
class Student {
private:
	//delecraing variavbles for storing the data
	string name;
	int rollNumber = 0;
	double cgpa;
public:
	//defaulr constructor 
	Student();
	//parametrized conmatructor
	Student(string Sname, int rollN, double Cgpa);
	//setters
	void setname(string Sname);
	void setrollNumber(int rollN);
	void setcgpa(double Cgpa);
	//getters
	string getname();
	int getrollNumber();
	double getcgpa();
	//display function
	void display();
};