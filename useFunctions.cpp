#include <iostream>
using namespace std;

int myIntFunction(int number) {
	for (int i = 0; i < number; i++) {
		cout << i << ", ";
	}
	system("pause>0");
	return number;
}

int main() {
	// main is the driver function
	int number;
	myIntFunction(5);
	return 0; //ends program
}
