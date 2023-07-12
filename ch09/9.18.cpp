#include<algorithm>
#include<iostream>
#include <string>
#include<vector>
#include <set>
#include<deque>

using std::deque;
using std::set;
using std::vector;

using std::string;
using std::cout;
using std::cin;




int main()
{
	deque<string>dq;
	string s;
	while (cin>>s) {
		dq.push_back(s);
	}
	
	auto beg = dq.begin();
	for (beg; beg < dq.end(); ++beg) {
		cout << *beg << " ";
	}
}
