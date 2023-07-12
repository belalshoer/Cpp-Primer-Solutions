#include<algorithm>
#include<iostream>
#include <string>
#include<vector>
#include <set>
#include<deque>
#include<list>
#include<forward_list>

using std::forward_list;
using std::deque;
using std::list;
using std::set;
using std::vector;

using std::string;
using std::cout;
using std::cin;


int main()
{
	list<string>ls;
	string a;
	while (cin >> a) {
		ls.push_back(a);
	}
	cout << std::count(ls.begin(), ls.end(), "hey");

	return 0;
}
