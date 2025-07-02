// Question b)

#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
using namespace std;

int main() {
	int yesNo = 0, number, prime;
	do {
		do {
			cout << "Enter any positive number greater than 1." << endl;
			cin >> number;

			if (number <= 1) {
				cout << "Invalid value. Please try again." << endl;
			}
		} while (number <= 1);

		cout << "The prime numbers from 0 to " << number << " are:" << endl;

		for (int i = 2; i <= number; i++) {
				
			prime = 1;

			for (int j = 2; j <= i / 2; ++j) {
				if (i % j == 0) {
					prime = 0;
					break;
				}
			}

			if (prime == 1) {
				cout << i << " ";
			}
		}

		do {
			cout << endl;
			cout << "Would you like to input a different number? Type 1 for yes or 2 for no." << endl;
			cin >> yesNo;

			if (yesNo != 1 && yesNo != 2) {
				cout << "Invalid value." << endl;
			}
		} while (yesNo != 1 && yesNo != 2);

	} while (yesNo != 2);


	system("pause");

	return 0;
}