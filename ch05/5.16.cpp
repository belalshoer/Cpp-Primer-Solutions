#include<iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

// the choice depends on the situation.


int main() {
	int i;
	while (cin >> i)  cout << i; 
	for (; cin >> i;)  cout << i; 

	int sum = 0;
	for (int j = 1; j < 11; ++j) sum += j;
	sum = 0;
	int k = 1;
	while (k < 11) {
		sum += k;
		++k;
	}


	return 0;
}