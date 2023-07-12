#include<iostream>
#include <string>
#include <list>
#include <deque>
#include <vector>
#include <array>

using std::array;
using std::vector;
using std::list;
using std::deque;
using std::string;
using std::cout;
using std::cin;



int main()
{
	list<int>ls{ 1,2,3 };
	vector<int>v1{ 1,2,3 };
	cout << (v1 == (vector<int>(ls.begin(), ls.end())));






	return 0;
}

