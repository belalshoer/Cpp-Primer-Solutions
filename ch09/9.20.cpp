#include<algorithm>
#include<iostream>
#include <string>
#include<vector>
#include <set>
#include<deque>
#include<list>

using std::deque;
using std::list;
using std::set;
using std::vector;

using std::string;
using std::cout;
using std::cin;




int main()
{
	list<int>ls{1, 2, 3, 4, 5};
	deque<int>dq1;
	deque<int>dq2;
	auto beg = ls.begin();
	while (beg != ls.end()) {
		if (*beg % 2) dq1.push_back(*beg);
		else dq2.push_back(*beg);
		++beg;
	}
}
