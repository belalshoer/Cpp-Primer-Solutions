#include<iostream>
#include <string>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::string;
using std::endl;
/*
someValue ? ++x, ++y : --x, --y;
id "somevalue" is true x and y will be incremented else they will be decremented
*/
int main() {
	int value = 0;
	int x = 5, y = 5;
	value? ++x, ++y : --x, --y;
	
	

	return 0;
}