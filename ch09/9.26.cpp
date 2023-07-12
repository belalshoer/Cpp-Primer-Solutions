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
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	vector<int>vec;
	
	for (auto c : ia) {
		vec.push_back(c);
	}
	list<int>ls{ vec.begin(),vec.end() };
	auto it = ls.begin();
	auto itt = vec.begin();
	while (it != ls.end()) {
		if (*it & 1) it = ls.erase(it);
		else ++it;
	}
	while (itt != vec.end()) {
		if (!(*itt & 1)) itt = vec.erase(itt);
		else ++itt;
	}
	for (auto c : ls) {
		cout << c << " ";
	}
	cout << '\n';
	for (auto c : vec) {
		cout << c << " ";
	}
	
	return 0;
}
