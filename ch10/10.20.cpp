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
struct Sales_data {
	// new members: operations on Sales_data objects
	std::string isbn() const { return bookNo; } Sales_data& combine(const Sales_data&); double avg_price() const;
	// data members are unchanged from § 2.6.1 (p. 72)
	std::string bookNo; unsigned units_sold = 0; double revenue = 0.0;
};
// nonmember Sales_data interface functions
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);
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
	Sales_data total; // variable to hold the running sum
	if (read(cin, total)) { // read the first transaction
		Sales_data trans; // variable to hold data for the next transaction
		while (read(cin, trans)) { // read the remaining transactions
			if (total.isbn() == trans.isbn()) // check the isbns
				total.combine(trans); // update the running total
			else {
				print(cout, total) << endl; // print the results
				total = trans; // process the next book
			}
		}
		print(cout, total) << endl; // print the last transaction
	}
	else { // there was no input
		cerr << "No data?!" << endl; // notify the user
	}


	return 0;
}
