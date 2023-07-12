#include <iostream>

int main() {
	/*we use auto when we want to infer the type of a variable from its initializer
	* we use decltype when we want to infer the type of a variable from an expression without evaluating it
	* The way decltype handles top-level const and references differs subtly from the
	way auto does. When the expression to which we apply decltype is a variable,
	decltype returns the type of that variable, including top-level const and
	references.
	similar:
	* int i = 0;
	* auto x = i; x is an int
	* decltype(i + 0) x; x is an int
	* const int ci = 0;
	* different:
	* auto x = ci; x is an int
	* decltype(ci) x; x is a const int
	*/
	return 0;
}