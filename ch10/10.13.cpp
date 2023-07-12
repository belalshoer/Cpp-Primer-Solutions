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

bool five(const string& s1)
{
	return (s1.size() > 5) ? true : false;
}
void out(const vector<string>& vec, std::ostream& os) {
	for (auto c : vec) {
		os << c << ' ';
	}
}

void elimdups(vector<string>& vec) {
	sort(vec.begin(), vec.end());
	out(vec, cout);
	cout << '\n';
	auto end_unique = std::unique(vec.begin(), vec.end());
	out(vec, cout);
	cout << '\n';
	vec.erase(end_unique, vec.end());
	out(vec, cout);
	cout << '\n';
}

int main()
{
	vector<string>vec{ "hey", "flamingo", "fox", "word", "book", "word" };
	std::partition(vec.begin(), vec.end(), five);
	out(vec, cout);


	return 0;
}
