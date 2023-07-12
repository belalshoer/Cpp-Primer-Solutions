#include<iostream>
#include <cassert>
#include <string>
#include <vector>
#include <array>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
#define NDEBUG
void print(vector <int> vec) {
#ifndef NDEBUG
	cout << "vector's size is: " << vec.size() << '\n';
#endif
	if (vec.empty())
		return;
		
	cout << *(vec.begin());
	print(vector<int>(vec.begin() + 1, vec.end()));

}
int main() {
	vector<int> vec{ 1,2 };
	print(vec);

}
