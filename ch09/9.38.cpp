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
	vector<int>vec;
	cout << "size: " << vec.size() << " capacity: " << vec.capacity()<<'\n';
	vec.push_back(12);
	cout << "size: " << vec.size() << " capacity: " << vec.capacity() << '\n';
	vec.reserve(10);
	cout << "size: " << vec.size() << " capacity: " << vec.capacity() << '\n';
	vec.push_back(5);
	cout << "size: " << vec.size() << " capacity: " << vec.capacity() << '\n';
	vec.push_back(7);
	cout << "size: " << vec.size() << " capacity: " << vec.capacity() << '\n';
	vec.shrink_to_fit();
	cout << "size: " << vec.size() << " capacity: " << vec.capacity() << '\n';
	return 0;
}
