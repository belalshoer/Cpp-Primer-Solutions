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

void swap(int* a, int* b) {
	int x = *a;
	*a = *b;
	*b = x;
	

}
int main()
{
	int a = 5, b = 4;
	swap(&a, &b);
	cout << a << " " << b;
	return 0;
}

