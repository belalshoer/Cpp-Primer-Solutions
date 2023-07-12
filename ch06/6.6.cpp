#include<iostream>
#include <string>
#include <vector>
#include <stdexcept>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::runtime_error;
/*
parameters are variables declared inside the paramter list
local variables are variables declared inside a block
static variables are variables that are active till program's termination and they can be used inside functions
and their life time will end with the whole program's not with the function*/
int counter() {
	for (int i = 0; i < 10; ++i) return i; // i is a local variable
}
int cunnter2(int x) {  // x is a parameter
	for (int i = 0; i < x; ++i) return i;
}
int counter3() {
	static int ctr = 0;  // ctr is a static variable
	++ctr;
	return ctr;
}
int main()
{
	for (size_t i = 0; i != 2; ++i) cout << counter3() << endl; return 0;
}

