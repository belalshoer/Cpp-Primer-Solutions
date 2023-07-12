#include<iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;
/*
(a) sizeof x + y: sizeof(x) + y
(b) sizeof p->mem[i]: sizeof(p->mem[i])
(c) sizeof a < b: sizeof(a) < b
(d) sizeof f(): sizeof(f())
*/
int main() {
	int x[10]; int* p = x;
	cout << sizeof(x) / sizeof(*x) << endl;//size of x / size of int = 40 / 4 = 10
	cout << sizeof(p) / sizeof(*p) << endl;// size of pointer p / size of int 


	return 0;
}