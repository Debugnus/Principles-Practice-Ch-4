#include <iostream>
#include <vector>

// TODO funtion for calculation!
// FUNCTIONS FOR EVERYTHING
// prototypes up top functions down bottom

void Init();
void GetNumber();
void CompareIntegers();
void PrintResult();

int main() {

	Init();

	while (std::cin >> Init) {

		CompareIntegers();
		PrintResult();

		return 0;
	}
}


		// Class or  Struct ?

void Init() {

	//std::vector<double> numbers;
	//int InfiniteLoopCheck = 0;

	double Number = 0.0;
	double Largest = 0.0;
	double Smallest = 0.0;
}


void GetNumber() {
	double Number = 0;
	std::cout << "Give me 1 integer: ";
	
	
}

void CompareIntegers() {
	// compare integers
	if (Number > Smallest && Number > Largest) {
		Largest = Number;
	}
	else if (Number < Largest && Number < Smallest) {
		Smallest = Number;
	}
}

void PrintResult() {
	// print out largest and smallest so far
	std::cout << "\n" << Largest << " is the largest number so far!\n"
		<< Smallest << " is the smallest number so far!\n";

}
