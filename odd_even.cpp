// COS 201 / CSC 207 Assignment
// Program: Check whether a number is Odd or Even
// Language: C++

#include <iostream>
#include <limits>

using namespace std;

int main() {
    long long number;

    cout << "Enter an integer: ";

    // Keep asking until the user types a valid whole number
    while (!(cin >> number)) {
        cout << "Invalid input. Please enter a whole number: ";
        cin.clear();                                          // clear the error state
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // discard the bad input
    }

    // A number is even if it leaves no remainder when divided by 2
    if (number % 2 == 0) {
        cout << number << " is an Even number." << endl;
    } else {
        cout << number << " is an Odd number." << endl;
    }

    return 0;
}
