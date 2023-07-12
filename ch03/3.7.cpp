#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
/*
when we use a for range we get a copy of the char so when we modify the char this is not reflected
in the original string so in this case, using a char & will solve the problem as we will be working on the
original chars with just a reference to them*/
int main() {
	string s;
	cin >> s;
	for (char c : s) {
		c = 'X';
	}
	cout << s;
}