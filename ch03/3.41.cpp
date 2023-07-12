#include<iostream>
#include <vector>
#include <iterator>
using std::vector;
using std::cout;
using std::cin;
using std::string;

int main() {
	int arr[] = { 0, 1, 2, 3 };
	vector <int> ivec(std::begin(arr), std::end(arr));
	return 0;
}