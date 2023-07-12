#include <iostream>
int main() {
	int ival = 5;
	int* ptr = &ival;
	*ptr = 10;
	ival = 17;
	

	return 0;
}