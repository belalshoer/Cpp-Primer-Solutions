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
	forward_list<int>fls{0,1,2,3,4,5};
	auto prev = fls.before_begin();
	auto curr = fls.begin();
	while(curr != fls.end()) {
		if (*curr & 1) curr = fls.erase_after(prev);
		else {
			prev = curr;
			++curr;
		}
	}
	for (auto c : fls) {
		cout << c << ' ';
	}
	return 0;
}
