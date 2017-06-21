#include <iostream>

int main() {

	// initialise variables
	double Number = 0.0;
	double Largest = 0.0;
	double Smallest = 0.0;

	std::cout << "Give me a number: ";
	std::cin >> Number;

	// change to first seen number
	Largest = Number;
	Smallest = Number;

	std::cout << "\n" << Largest << " is the largest number so far!\n"
		<< Smallest << " is the smallest number so far!\n";

	std::cout << "Give me a number: ";
	while (std::cin >> Number) {


		if (Number > Smallest && Number > Largest) {
			Largest = Number;
		}
		else if (Number < Largest && Number < Smallest) {
			Smallest = Number;
		}


		std::cout << "\n" << Largest << " is the largest number so far!\n"
			<< Smallest << " is the smallest number so far!\n";

		std::cout << "Give me a number: ";

	}

	return 0;
}
