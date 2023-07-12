#include <iostream>
int main() {
	int i = 42; // define variable i and initialize it with 42
	int* p1 = &i; //define int pointer p1 and make it point to the address of 'i'
	*p1 = *p1 * *p1; // change the value of the pointer and i to equal the square of its current value: 42 * 42 = 1764
	return 0;
}