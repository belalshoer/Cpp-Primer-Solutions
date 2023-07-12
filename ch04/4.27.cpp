#include<iostream>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
/*
* ul1& ul2
* 00000000000000000000000000000011 = 3
*				&
* 00000000000000000000000000000111 = 7
* = 00000000000000000000000000000011 = 3
* 
* ul1 | ul2
*  00000000000000000000000000000011 = 3
*				|
* 00000000000000000000000000000111 = 7
* = 00000000000000000000000000000111 = 7
* 
* ul1&& ul2; -> true
* ul1 || ul2; -> true
*/

int main() {
	unsigned long ul1 = 3, ul2 = 7;
	ul1& ul2;
	ul1 | ul2;
	ul1&& ul2;
	ul1 || ul2;
}