#include <iostream>
int main() {
	int x = 0,  y = 0;
	std::cout << "Enter 2 number in a range start then end: ";
	std::cin >> x >> y;
	while (!(x > y)) {
		std::cout << x << std::endl;
		++x;
	}
}