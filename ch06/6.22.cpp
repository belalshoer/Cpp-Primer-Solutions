#include<iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
void swap(int*& a, int*& b) {
	int* temp = a;
	a = b;
	b = temp;
}

int main()
{
	int x = 8;
	int y = 7;
	int* z = &x;
	int* w = &y;
	swap(z, w);
	cout << *z << " " << *w;
	return 0;
}

