#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::vector;

int main() {
	vector <string> v;
	string line;
	while (getline(cin, line)) {
		v.push_back(line);
	}
	for (auto it = v.begin(); it != v.end() && !empty(*it); it++) {
		for (auto& c : *it)
			c = toupper(c);
	}
	for (auto it = v.cbegin(); it != v.cend(); it++) cout << (*it) << " ";




	return 0;
}