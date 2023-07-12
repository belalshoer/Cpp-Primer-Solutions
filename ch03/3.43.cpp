#include<iostream>
#include <vector>
#include <iterator>
using std::vector;
using std::cout;
using std::cin;
using std::string;
using std::begin;
using std::end;
int main() {
	size_t cnt = 0;
	int arr[3][4];
	for (int(&row)[4] : arr) {
		for (int& c : row) {
			c = cnt;
			cnt++;
		}
	}

	for (int (&row) [4] : arr) {
		for (int col : row)
			cout << col << " ";
		cout << "\n";
	}
	cout << "\n";
	int rows = sizeof(arr) / sizeof(arr[0]);
	int cols = sizeof(arr[0]) / sizeof(arr[0][0]);
	for (size_t i = 0; i < rows; i++) {
		for (size_t j = 0; j < cols; j++) {
			cout <<  arr[i][j] << " ";
		
		}
		cout << "\n";
	}
	cout << "\n";
	
	for (int(*p)[4] = arr; p < arr + 3; p++) {
		for (int* q = *p; q < *p + 4; q++)
			cout << *q << " ";
		cout << "\n";
	}
	return 0;
}