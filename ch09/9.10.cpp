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



int main()
{
	vector<int> v1;
	const vector<int> v2;
	auto it1 = v1.begin();
	auto it2 = v2.begin();
	auto it3 = v1.cbegin(), it4 = v2.cbegin();
	/*
	it1: vector<int>::iterator
	it2, it3, it4: vector<int>::const_iterator
	*/

	return 0;
}

