#include <iostream>

using namespace std;


int main() {
	int number;
	cout << "enter number: ";
	cin >> number;

	for (int i = 1; i <= number; i++) {

		int counter = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0)
				++counter;
			if (counter > 2)
				break;

		}
		if (counter == 2)
			cout << i << ", ";

	}
	return 0;
}