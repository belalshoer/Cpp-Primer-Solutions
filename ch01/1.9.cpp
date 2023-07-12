#include <iostream>
int main() {
	int x = 50, sum = 0;
	while (x <= 100) {
		sum += x;
		++x;
	}
	std::cout << "the sum of the numbers from 50 to 100 is " << sum;
	return 0;
}