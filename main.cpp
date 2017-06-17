#include <iostream>
#include <vector>

int main() {

	std::vector<double> numbers;
	int InfiniteLoopCheck = 0;
	double Number=0.0;
	double Largest=0.0;
	double Smallest=0.0;

	std::cout << "Give me 1 ineger: ";
	std::cin >> Number;
	Smallest = Number;
	Largest = Number;

	while (Number){
		/*
		numbers.push_back(Number);
		for (size_t i = 0; i < numbers.size(); ++i) {
			if (i == 0 || numbers[i - 1] == numbers[i]) {
				if (Smallest == numbers[i] && Largest == numbers[i]) {
					InfiniteLoopCheck++;
					if (InfiniteLoopCheck == 5) {
						return 0;

					}
				
				}
			}

		}
		*/

		// compare integers
		if (Number > Smallest) {
			if (Number > Largest) {
				Largest = Number;
								
				}
				
			
		}
		else
		{
			if (Number < Largest) {
				if (Number < Smallest) {
					Smallest = Number;
				}
			}
		}
		


		if (Smallest == Smallest && Largest == Largest) {
			InfiniteLoopCheck++;
			if (InfiniteLoopCheck == 5) {
				return 0;

			}
		}

		// print out largest and smallest so far
		std::cout << "\n" << Largest << " is the largest number so far!\n"
			<< Smallest << " is the smallest number so far!\n";

		// ask for integers
		std::cout << "\n" << "\nGive me 1 integer: ";
		std::cin >> Number;
	}

	return 0;
}
