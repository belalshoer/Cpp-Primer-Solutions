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

int counter3() {
	static int ctr = 0;  // ctr is a static variable
	return ctr++;
}
int main()
{
	for (size_t i = 0; i != 2; ++i) cout << counter3() << endl; return 0;
}

