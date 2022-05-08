#include <iostream>
using namespace std;

int isPrime(int number)
{
    if (number <= 3 && number > 1)
        return 1;            // as 2 and 3 are prime
    else if (number % 2 == 0 || number % 3 == 0)
        return 0;     // check if number is divisible by 2 or 3
    else
    {
        for (unsigned int i = 5; i * i <= number; i += 6) {
            if (number % i == 0 || number % (i + 2) == 0)
                return 0;
        }
        return 1;
    }
}

int main() {
    int theNumbers[5] = { 0, 3, 5, 15, 27 };

    // Loop through the array looking for prime numbers
    for (int i = 0; i < 5; i++) {
        if (isPrime(theNumbers[i]) == 1) {
            cout << theNumbers[i] << "\n";
        }
    }
    return;
}