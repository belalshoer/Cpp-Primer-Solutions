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

void out(vector<string>& vec, std::ostream& os) {
	for (auto x : vec) {
		os << x << ' ';
	}
}
void elimdups(vector<string>& vec) {
	sort(vec.begin(), vec.end());
	auto end_unique = std::unique(vec.begin(), vec.end());
	vec.erase(end_unique, vec.end());
}
void beggies(vector<string>& vec, vector<string>::size_type sz) {
	elimdups(vec);
	std::stable_sort(vec.begin(), vec.end(), [](const string& x, const string& y) {
		return x.size() < y.size(); });
	std::partition(vec.begin(), vec.end(), [sz](const string& s) {return s.size() >= sz; });
}
int main()
{
	vector<string>vec{ "hey", "world", "hello", "house" };
	beggies(vec, 4);
	out(vec, cout);


	return 0;
}
