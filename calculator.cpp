#include <iostream>
using namespace std;

// initialize functions
int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);
int modulous(int, int);

int main() {
	int userChoice; // a number 1-6 that determines what type of math operation will be performed
	int num1; // first number user enters
	int num2; // second number user enters
	string userRepeat; // user enters yes or no

	bool endProgram; // used for while loop
	endProgram = false;
	
	while (endProgram == false) {
		// print list of operator choices
		cout << "\n1. add\n2. subtract\n3. multiply\n4. divide\n5. modulous\n";
		cout << "Please choose an operation from the list: ";
		cin >> userChoice;

		// get numbers
		cout << "\nEnter a number: ";
		cin >> num1;
		cout << "Enter another number: ";
		cin >> num2;
		cout << "\nCalculating..." << endl;
		cout << " " << endl;

		// call functions 
		if (userChoice == 1) {
			int result;
			result = add(num1, num2);
			cout << num1 << " + " << num2 << " = " << result << "\n";
		}
		else if (userChoice == 2) {
			int result;
			result = subtract(num1, num2);
			cout << num1 << " - " << num2 << " = " << result << "\n";
		}
		else if (userChoice == 3) {
			int result;
			result = multiply(num1, num2);
			cout << num1 << " x " << num2 << " = " << result << "\n";
		}
		else if (userChoice == 4) {
			double result;
			result = divide(num1, num2);
			cout << num1 << " / " << num2 << " = " << result << "\n";
		}
		else if (userChoice == 5) {
			int result;
			result = modulous(num1, num2);
			cout << num1 << " % " << num2 << " = " << result << "\n";
		}
		else {
			cout << "Invalid operation" << "\n";
		}


		// repeat?
		cout << "\nDo you want to do another calulation (yes/no)? ";
		cin >> userRepeat;

		if (userRepeat == "no") {
			cout << "\nProgram ended";
			endProgram = true; // stops while loop
		}
	}

	system("pause>0"); // makes so doesn't print default stuff
	return 0; //end function
} 

// calculator functions

int add(int num1, int num2) {
	return num1 + num2;
}

int subtract(int num1, int num2) {
	return num1 - num2;
}

int multiply(int num1, int num2) {
	return num1 * num2;
}

int divide(int num1, int num2) {
	return num1 / num2;
}

int modulous(int num1, int num2) {
	return num1 % num2;
}