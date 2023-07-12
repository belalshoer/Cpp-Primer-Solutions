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
/*
string s;
while (cin >> s && s != sought) { } // empty body
assert(cin);

it keeps on reading "s" and if it read "s" successfully it checks whether s doesn't 
equal sought if any of the conditions returns false it will stop

it might not be a good use because the assertion will fail only if the input stream returns false
*/
int main() {
	string sought = "bye";
	string s;
	while (cin >> s && s != sought) {} // empty body
	assert(cin);
	std::cout << "x is less than y" << std::endl;

}
