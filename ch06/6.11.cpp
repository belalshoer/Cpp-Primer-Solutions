#include<iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;


void reset(int& a) {
	a = 0;


}
int main()
{
	int a = 5;
	reset(a);
	cout << a;
	return 0;
}

