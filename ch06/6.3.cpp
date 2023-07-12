#include<iostream>
#include <string>
#include <vector>
#include <stdexcept>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::runtime_error;
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


int main() {
	cout << factorial(5);
	return 0;
}

