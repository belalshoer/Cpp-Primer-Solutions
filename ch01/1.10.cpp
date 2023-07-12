#include <iostream>

int main() {
	int x = 0, y = 0;
	std::cout << "Enter two range numbers, the starting then the ending number: ";
	std::cin >> x >> y;
	while (!(x > y)) {
		std::cout << x << std::endl;
		++x;
	}
	return 0;
}