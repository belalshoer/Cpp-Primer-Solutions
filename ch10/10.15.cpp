#include<algorithm>
#include<numeric>
#include<iostream>
#include <string>
#include<vector>
#include <set>
#include<deque>
#include<list>
#include<forward_list>
#include<ostream>

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
	int y = 3;
	auto sum = [y](int& x) {return x + y;  };


	return 0;
}
