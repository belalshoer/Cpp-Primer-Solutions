#include<iostream>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
/*
q is 01110001
~q: 10001110
~q << 6: 10000000
value is: -7296
*/

int main() {
	int q = 113;
	cout << (~q << 6);

}