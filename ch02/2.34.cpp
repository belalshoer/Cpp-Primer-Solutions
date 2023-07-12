#include <iostream>
int main() {
	int i = 0, & r = i;
	const int ci = i, & cr = ci;
	auto a = r;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	const auto f = ci;
	auto& g = ci;
	std::cout << a;
	a = 42;
	std::cout << "\n" << a;
	std::cout << "\n" << b;
	b = 42;
	std::cout << "\n" << b;
	std::cout << "\n" << c;
	c = 42;
	std::cout << "\n" << c;
	std::cout << "\n" << d;
	// d = 42;
	std::cout << "\n" << d;
	std::cout << "\n" << e;
	// e = 42;
	std::cout << "\n" << e;
	std::cout << "\n" << f;
	// f = 42;
	std::cout << "\n" << f;
	std::cout << "\n" << g;
	// g = 42;
	std::cout << "\n" << g;

	return 0;
}