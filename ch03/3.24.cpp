#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::vector;

int main() {
	int i;
	vector <int> v;
	while (cin >> i) {
		v.push_back(i);
	}
	auto it = v.begin();
	for (auto it = v.begin(); it != v.end() - 1; it++) {
		cout << *it + *(it + 1) << " " ;
	}
	cout << "\n";
	for (auto it = v.begin(), ite = v.end() - 1; it <= ite; it++, ite--) {
		
		cout << *it + *ite << " ";
	}
	



	return 0;
}