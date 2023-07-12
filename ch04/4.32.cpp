#include<iostream>
#include <string>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::string;
using std::endl;
/*
ptr is pointer to the first elemnt in the array and ix is an int with value 0
the loop continues if ix != 5 (array's size) and ptr points to the element inside the array
in each loop iteration except for the first one ix is incremented and ptr points to the next element in the array
*/
int main() {
	constexpr int size = 5;
	int ia[size] = { 1,2,3,4,5 };
		for (int* ptr = ia, ix = 0;
			ix != size && ptr != ia + size;
			++ix, ++ptr) { /* ... */
	}

	return 0;
}