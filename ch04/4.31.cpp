#include<iostream>
#include <string>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::string;
using std::endl;
/*
the results are the same we use pre fix if we want to increment the value and use it instantly
we use post fix if we want o increment the value and get a copy of the original unicremented value
*/
int main() {
	vector<int> ivec{ 0, 2, 3 };
	vector<int>::size_type cnt = ivec.size();
	for (vector<int>::size_type ix = 0;
		ix != ivec.size(); ix++, cnt--) ivec[ix] = cnt;

	return 0;
}