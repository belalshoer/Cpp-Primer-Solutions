#include <iostream>
int main() {
	int x, sum = 0;
	while (std::cin >> x) {
		sum += x;
	}
	std::cout << "sum = " << sum;
	return 0;
}