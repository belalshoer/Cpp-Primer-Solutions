#include <iostream>
int main() {
	// (a) int ival = 1.01; valid
	// (b) int &rval1 = 1.01; invalid refernces can't be bound to literals
	// (c) int &rval2 = ival; valid
	// (d) int &rval3; invalid references cannot be uninitialized
	return 0;
}