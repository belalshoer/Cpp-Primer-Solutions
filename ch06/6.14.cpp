#include<iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

// by reference is preferred

void swap(int& a, int& b) {
	int x = a;
	a = b;
	b = x;
}
// by value is preferred

int factorial(int x) {
	unsigned long long result = x;
	if (x == 0) {
		return 1;
	}
	else {
		while (x > 1)
			result *= --x;
		return result;

	}
}
int main()
{
	return 0;
}

