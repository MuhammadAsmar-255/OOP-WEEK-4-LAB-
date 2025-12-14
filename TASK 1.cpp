//L1F24BSCS0069- MUHAMMAD ASMAR NAEEM
#include<iostream>
using namespace std;
class Student{
	private:
		string name;
		int age;
		float* marks;
	public:
		Student() {
			name = "Unkown";
			age = 0;
			marks = new float(0);
			cout << "Default constructor called " << endl;
		}
		Student(string n, int a, float m) {
			name = n;
			age = a;
			marks = new float(0); //LOGICAL AND RUNTIME ERROR-chnaging the logic beacuse in the earlier code the value was not being assigned to the float pointer because the pointer was not decleraed.
			cout << "Parametrized construcrtor is called" << endl;
		}
		void display() {
			cout << "name: " << name << ", Age: " << age << ", Marks" << *marks << endl; //SYNTAX ERROR-marks variale is corrected by assigned the * sign so that it access memorry and then display the data.
		}
		~Student() {
			delete marks;
			cout << "Destructor is called" << endl;
		}
};
int main() {
	Student s1;
	Student s2("Afham", 22, 88.5);
	s1.display();
	s2.display();
	return 0;
 }