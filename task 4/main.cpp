#include"Student.h"
int main() {
	//making the classes
	Student s1;
	Student s2("asmar", 69, 3.0);
	Student s3("hashim", 70, 3.1);

	//displaying the data of each student
	s2.display();
	s1.display();
	s3.display();

	return 0;
}