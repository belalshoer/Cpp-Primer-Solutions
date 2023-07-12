#include <iostream>
int main() {
	/*const int i = 42;
	auto j = i; const auto &k = i; auto *p = &i; j is an int, k is a const int &, const int *
	const auto j2 = i, &k2 = i; j2 is a const int, k2 is a const int &
	*/
	const int i = 42;
	auto j = i; const auto& k = i; auto* p = &i;
	const auto j2 = i, & k2 = i;
	return 0;
}