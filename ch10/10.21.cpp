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
	auto count = std::count_if(vec.begin(), vec.end(), [sz](const string& s) {return s.size() >= sz; });
	cout << count << '\n';
}
int main()
{
	int n;
	auto isZero = [&n] { return n > 0 ? --n, false : true; };
	// Use comma expression to return bool value
	std::cin >> n;

	while (!isZero())
		std::cout << n << std::endl;
	isZero();
	std::cout << n << std::endl;


	return 0;
}
