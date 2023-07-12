#include<iostream>
#include <string>
#include <vector>
#include <array>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
int add(int a, int b) {
	return a + b;
}
int subtract(int a, int b) {
	return a - b;
}
int multiply(int a, int b) {
	return a * b;
}
int divide(int a, int b) {
	return a / b;
}
int fun(int val1, int val2);
int main() {

	vector<int (*) (int, int)>vec;
	vec.push_back(add);
	vec.push_back(subtract);
	vec.push_back(multiply);
	vec.push_back(divide);
	for (auto& c : vec)
		c(4, 5);
}
