#include<iostream>
#include <vector>
#include <iterator>
using std::vector;
using std::cout;
using std::cin;
using std::string;

int main() {
	int arr[4];
	vector <int> ivec{0, 1, 2, 3};
	auto it = ivec.begin();
	for (int i = 0; i < 4; i++) {
		arr[i] = *it;
		it++;
	}
	for (auto c : arr) {
		cout << c << " ";
	}
	return 0;
}