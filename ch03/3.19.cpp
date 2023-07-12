#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::vector;

int main() {
	vector <int> vec1(10, 42); //preferred, succinct
	vector <int> vec2{ 42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
	vector <int> vec3;
	for (auto i = 0; i < 10; i++) vec3.push_back(42);
	



	return 0;
}