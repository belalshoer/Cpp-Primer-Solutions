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
bool found(vector<int>::iterator begin, vector<int>::iterator end, int val) {
	while(begin!=end){
		if (*begin == val) {
			return true;
		}
		++begin;
	}
	return false;
}


int main()
{
	vector<int> vec{ 1,2,3,4 };
	auto beg = vec.begin();
	auto end = vec.end();
	cout << found(beg, end, 4);
	
	return 0;
}

