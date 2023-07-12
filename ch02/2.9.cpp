#include <iostream>
int main() {
	// (a) std::cin >> int input_value;  must be defined before cin so it leads to an error
	int input_value = 0;
	std::cin >> input_value;
	// (b) int i = { 3.14 }; list initialization prevents loss of information so it is an error
	int i = 3.14;
	std::cout << i;
	// (c) double salary = wage = 9999.99; an error beacause wage is undefined
	double wage;
	double salary = wage = 9999.99;
	// (d) int i =3.14; is legal
	return 0;
}