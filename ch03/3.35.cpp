#include<iostream>
#include <vector>
#include <iterator>
using std::vector;
using std::cout;
using std::cin;

int main() {
	int arr[] = { 0, 1, 2, 3, 4 };
	int* pbeg = std::begin(arr), * pend = std::end(arr);
	for (pbeg; pbeg != pend; pbeg++) {
		*pbeg = 0;
	}
	for (auto c : arr) {
		cout << arr[c];
	}

	return 0;
}