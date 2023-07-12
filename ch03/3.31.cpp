#include<iostream>
using std::cout;
using std::cin;

int main() {
	int arr[10];
	for (auto i = 0; i < 10; i++) arr[i] = i;
	for (auto& c : arr) {
		cout << c << " ";
	}
	return 0;
}