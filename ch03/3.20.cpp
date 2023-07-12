#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::vector;

int main() {
	int val;
	vector <int> vec;
	while (cin >> val) vec.push_back(val);
	for (auto i = 0; i < (vec.size() - 1); i++)
		cout << vec[i] + vec[i + 1] << " ";
	cout << "\n";
	for (auto i = 1; i <= ((vec.size() + 1) / 2); i++) 
		cout << vec[i-1] + vec[vec.size() - i] << " ";



	return 0;
}