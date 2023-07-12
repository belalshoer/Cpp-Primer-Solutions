#include<iostream>
#include <string>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::string;
using std::endl;
/*
double slope = static_cast<double>(j/i);
the int quotient is truncated then explicitly converted to double then assigned to slope
*/
int main() {
	int i = 5, j = 6;
	double slope = static_cast<double>(j / i);
	cout << slope;

	return 0;
}