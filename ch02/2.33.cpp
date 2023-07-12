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
	a = 42; //ok
	b = 42; //ok
	c = 42; //ok
	//d = 42; Error 
	//e = 42; Error
	//g = 42; Error
	return 0;
}