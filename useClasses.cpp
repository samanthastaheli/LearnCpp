#include <iostream>
#include <list>
using namespace std;

class myClass {
	// class for a task list
public: //makes variables accessiable outside of the class 
	string Name;
	string Major;
	string From;
	string SchoolYear;
};

int main() {
	myClass person;

	person.Name = "Sam";
	person.Major = "Computer Science";
	person.From = "Washington";
	person.SchoolYear = "Senior";

	cout << "Student: " << person.Name;
	cout << "Studing: " << person.Major;
	cout << "From: " << person.From;
	cout << "Year: " << person.SchoolYear;

	system("pause>0");
}
