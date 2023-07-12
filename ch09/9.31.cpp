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

/*
operator arithemetic is not supported in list and forward_list
*/
int main()
{
	list<int> ls = { 0,1,2,3,4,5,6,7,8,9 };
	auto iter = ls.begin(); 
	
	while (iter != ls.end()) {
		if (*iter % 2) {
			iter = ls.insert(iter, *iter); 
			
				++iter;
				++iter;
		}
		else
			iter = ls.erase(iter);
		
	}
	for (auto c : ls) {
		cout << c;
	}
	cout << '\n';
	forward_list<int> lsf = { 0,1,2,3,4,5,6,7,8,9 };
	auto it = lsf.begin();
	auto prv = lsf.before_begin();
	for (it, prv; it != lsf.end();) {
		if (*it & 1) {
			prv = lsf.insert_after(prv, *it);
			++it;
			++prv;
		}
		else {
			it = lsf.erase_after(prv);
		}
	}
	for (auto c : lsf) {
		cout << c;
	}
	
	return 0;
}
