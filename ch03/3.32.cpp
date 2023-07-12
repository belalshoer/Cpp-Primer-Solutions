#include<iostream>
#include <vector>
using std::vector;
using std::cout;
using std::cin;

int main() {
	int arr[10];
	for (auto i = 0; i < 10; i++) arr[i] = i;
	int arr2[10];
	for (auto i = 0; i < 10; i++) arr2[i] = arr[i];
	for (auto& c : arr2) {
		cout << c << " ";
	}
	vector <int> v1;
	for (auto i = 0; i < 10; i++) v1.push_back(i);
	vector <int> v2 = v1;
	
	return 0;
}