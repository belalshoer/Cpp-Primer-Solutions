#include<iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
/*
imo, the passing be reference version is much easier because we get to work directly 
on the object with the reference and it doesn't invlove dereferencing pointers*/

void swap(int& a, int& b) {
	int x = a;
	a = b;
	b = x;


}
int main()
{
	int a = 5, b = 4;
	swap(a, b);
	cout << a << " " << b;
	return 0;
}

