#include<iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;
/*
*/
int main() {
	int x[10]; int* p = x;
	cout << sizeof(x) / sizeof(*x) << endl;//size of x / size of int = 40 / 4 = 10
	cout << sizeof(p) / sizeof(*p) << endl;// size of pointer p / size of int 


	return 0;
}