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


int main()
{
	vector<int>vec{1, 2, 3};
	cout << std::accumulate(vec.begin(), vec.end(), 0);

	return 0;
}
