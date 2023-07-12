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
int absolute(int x) {
	
	if (x < 0) return - x;
	else return (x);



	
}

int main() {
	cout << absolute(-8);
	return 0;
}

