#include <iostream>

#include <factorial.hpp>

/**
 * returns n!
 */
int factorial(int n) {
	int prod = 1;
	while (n > 0) {
		prod = n * prod;
		n += -1;
	}
	return prod;
}
