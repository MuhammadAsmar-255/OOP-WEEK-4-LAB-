#include"Employee.h"
int main()
{
	Employee E1;
	Employee E2("asmar", "manager", 100000);
	Employee E3("ahmad", "developer",50000);
	//display 
	E1.display();
	E2.display();
	E3.display();

	return 0;
}