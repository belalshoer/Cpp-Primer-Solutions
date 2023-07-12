#include<iostream>
#include <string>
#include <vector>
#include <array>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
//legal, it assigns value from 0 -> 9 to this 10 element array
int& get(int* arry, int index) { 
	return arry[index];
}
int main() {
	int ia[10];
	for (int i = 0; i != 10; ++i) 
		get(ia, i) = i;
	
}


