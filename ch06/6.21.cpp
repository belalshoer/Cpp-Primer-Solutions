#include<iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
int is_larger(int a, int* b) {
	int larger = (a > *b) ? a : *b;
	return larger;
}

int main()
{
	int x = 8;
	
	cout << is_larger(5, &x);
	return 0;
}

