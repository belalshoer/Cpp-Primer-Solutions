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
	vector<char> vec {'H', 'E', 'Y'};
	string s(vec.begin(), vec.end());
	cout << s;
	
	return 0;
}
