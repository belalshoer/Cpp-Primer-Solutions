#include<iostream>
#include <cassert>
#include <string>
#include <vector>
#include <array>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
/*
void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);

(a) f(2.56, 42) ambiguous call because the first argument is an exact match
to the first parameter in (double, double) and the second argument is an exact match
to the second parameter in (int, int)

(b) f(42) f(int)
(c) f(42, 0) f(int, int)
(d) f(2.56, 3.14) f(double, double = 3.14)
*/
void f() {
	cout << "f()" << '\n';
}
void f(int) {
	cout << "f(int)" << '\n';
}
void f(int, int) {
	cout << "f(int, int)" << '\n';
}
void f(double, double = 3.14) {
	cout << "f(double, double = 3.14)" << '\n';
}
int main() {
	//f(2.56, 42);
	f(42);
	f(42, 0);
	f(2.56, 3.14);
}
