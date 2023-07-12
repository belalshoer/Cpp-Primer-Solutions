#include<iostream>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;

int main() {
	vector <int> vec {0, 1, 2, 3, 4, 5};
	for (auto& c : vec) {
		((c % 2) != 0) ? c *= 2 : c;
	}
	for (const auto& c : vec) {
		cout << c << " ";
	}
	return 0;
}