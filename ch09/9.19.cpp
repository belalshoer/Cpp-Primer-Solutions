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

// had to change < to be != as there is no comparison between list iterators


int main()
{
	list<string>ls;
	string s;
	while (cin >> s) {
		ls.push_back(s);
	}

	auto beg = ls.begin();
	for (beg; beg != ls.end(); ++beg) {
		cout << *beg << " ";
	}
}
