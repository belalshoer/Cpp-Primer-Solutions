#include<iostream>
#include <vector>
#include <iterator>
using std::vector;
using std::cout;
using std::cin;
using std::string;
/*
adding 2 pointers is meaningless because they are memory addresses and adding two memory addresses is
not meaningful but subtracting them would give us the distance between them and this is meaningful
*/
int main() {
	char c1[] = "first";
	char c2[] = "second";
	char c3[13];
	strcpy(c3, c1);
	strcat(c3, c2);
	return 0;
}