#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::vector;
/*
the following program:  vector<int> ivec;
						ivec[0] = 42;
it is illegal, because the vector has no elements*/
int main() {
	// a possible fix
	vector <int> ivec(1, 0);
	ivec[0] = 42;
	for (auto& c : ivec) cout << c;



	return 0;
}