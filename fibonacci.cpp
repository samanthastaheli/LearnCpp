#include <iostream>
using namespace std;

int fibonacci(int, int);

int main() {
	fibonacci(0, 10);
	return 0;
}

int fibonacci(int number, int endNum) {
	if (number <= endNum) {
		int firstNum = fibonacci(number - 1, endNum);
		int secondNum = fibonacci(number - 2, endNum);

		int total = firstNum + secondNum;

		cout << "first number = " << firstNum << " second number = " << secondNum << " = " << total;
	}
	else {
		return number;
	}
}
