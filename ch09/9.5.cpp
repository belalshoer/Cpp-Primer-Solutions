#include<iostream>
#include <string>
#include <list>
#include <deque>
#include <vector>

using std::vector;
using std::list;
using std::deque;
using std::string;
using std::cout;
using std::cin;
vector<int>::iterator found(vector<int>::iterator begin, vector<int>::iterator end, int val) {
	while (begin != end) {
		if (*begin == val) {
			return begin;
		}
		++begin;
	}
	return end;
}


int main()
{
	vector<int> vec{ 1,2,3,4 };
	auto beg = vec.begin();
	auto end = vec.end();
	found(beg, end, 4);

	return 0;
}

