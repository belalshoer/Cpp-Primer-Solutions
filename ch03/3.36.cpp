#include<iostream>
#include <vector>
#include <iterator>
using std::vector;
using std::cout;
using std::cin;

int main() {
	int arr[] = { 0, 1, 2, 3, 4 };
	int arr1[] = { 0, 1 ,2, 3, 4 };
	int* pbeg = std::begin(arr), * pend = std::end(arr);
	auto arr_size = (sizeof(arr) / sizeof(arr[0]));
	auto arr1_size = (sizeof(arr1) / sizeof(arr1[0]));


	if (arr_size == arr1_size) {
		for (int i = 0; i < 5; i++) {
			if (arr[i] != arr1[i]) {
				cout << "the two arrays are not equal" << "\n";
				break;
			}

		}
		cout << "the two arrays are equal" << "\n";
	}
	else {
		cout << "the two arrays are not equal" << "\n";
	}
	vector <int> vec1{ 1, 2, 3, 4 };
	vector <int> vec2{ 1, 2, 3, 4 };
	if (vec1 == vec2) cout << "the two vectors are equal" << "\n";
	else cout << "the two vectors are not equal" << "\n";


	return 0;
}