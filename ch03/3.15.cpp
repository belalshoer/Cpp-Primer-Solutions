#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;

int main() {
	string value;
	vector <string> vec;
	while (cin >> value) {
		vec.push_back(value);
	}
	return 0;
}