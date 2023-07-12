#include<iostream>
#include <string>
#include <vector>
#include <array>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
int sum(std::initializer_list<int>il) {
	int sum = 0;
	for (auto beg = il.begin(); beg != il.end(); ++beg)
		sum += *beg;
	return sum;
}

int main()
{
	cout << sum({1, 2, 3, 4});
	
	return 0;
}

