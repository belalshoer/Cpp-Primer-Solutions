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
	list <int> ls{ 0, 1, 2 };
	vector<int > v{ 0, 1, 2 };
	vector<double>vec(ls.begin(), ls.end());
	vector<double>vec(v.begin(), v.end());
	




	return 0;
}

