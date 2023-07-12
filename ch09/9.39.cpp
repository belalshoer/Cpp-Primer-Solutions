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
	vector<string> svec;
	svec.reserve(1024); // holds the capacity for 1024 elements
	string word;
	while (cin >> word) 
		svec.push_back(word); //read even if the size is more than 1024, the capacity will grow
	svec.resize(svec.size() + svec.size() / 2); // resize the capacity to be 1.5 * actual size
	return 0;
}
