#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;
/*
illegal, because s is empty so the index is out of range so it will result in an undefinde behaviour*/
int main() {
	string s;
	cout << s[0] << endl;
	return -1;
}