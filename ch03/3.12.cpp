#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;
// (a) vector<vector<int>> ivec; legal, it creates a vector of int vectors
// (b) (b) vector<string> svec = ivec; illegal, ivec is of type int and svec is of type string
// (c) vector<string> svec(10, "null"); legal, it creates ten elements with "null"
int main() {
	vector<string> v7(10);
	return 0;
}