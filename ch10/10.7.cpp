#include<algorithm>
#include<numeric>
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
(a) 
vector<int> vec; list<int> lst; int i;
while (cin >> i)
	lst.push_back(i);
copy(lst.cbegin(), lst.cend(), vec.begin());
it tries to copy the elements from the list into the vector but vec is empty
we can resize it vec.resize(lst.size()) then copy
or use an insert iterator copy(lst.begin(), lst.end(), back_inserter(vec))

(b)
vector<int> vec;
vec.reserve(10);
fill_n(vec.begin(), 10, 0);

reserve only increases the capacity but the elements do not exist yet
we can resize it and then we will have n default initialized elements or use an insert iterator
fill_n(back_inserter(vec), 10, 0); 

*/

int main()
{
	vector<int> vec;
	vec.reserve(10);
	vec.resize(10);

	for (auto c : vec) {
		cout << c;
	}

	return 0;
}
