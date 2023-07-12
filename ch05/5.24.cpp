#include<iostream>
#include <string>
#include <vector>
#include <stdexcept>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::runtime_error;

int main() {
	double num1, num2;
	cin >> num1 >> num2;
	if (num2 == 0) throw runtime_error("the second number mustn't be 0");
	cout << num1 / num2;

	return 0;
}