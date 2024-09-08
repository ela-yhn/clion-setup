#include <iostream>

#include <factorial.hpp>

int main() {
	// print some examples inputs and outputs
	std::cout << "Some examples of your factorial function's output:" << std::endl;
	std::cout << "3! = " << factorial(3) << std::endl;
	std::cout << "5! = " << factorial(5) << std::endl;
	std::cout << "10! = " << factorial(10) << std::endl;

	std::cout << "\n";

	// print out the factorial of a number input by the user
	int n{0};

	std::cout << "Enter a number: ";
	std::cin >> n;
	std::cout << n << "! = " << factorial(n) << std::endl;

	return 0;
}
