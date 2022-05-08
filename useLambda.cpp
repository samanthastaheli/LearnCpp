// #include <stdio.h>
#include <iostream>
// #include <vector>
using namespace std;

int main() {
	int num1;
	int num2; 

	cout << "Enter a number: ";
	cin >> num1;
	cout << "Enter another number: ";
	cin >> num2;

	// create a lambda function
	// []() {};
	int sum = [](int num1, int num2) { return num1 + num2; };

	cout << "The sum of " << num1 << "and " << num2 << "is " << sum;
	system("pause>0");
}