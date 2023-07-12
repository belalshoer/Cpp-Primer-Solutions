#include<iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
struct Sales_data {

	std::string isbn() const {
		return bookNo;
	}
	Sales_data& combine(const Sales_data&);

	std::string bookNo; unsigned units_sold = 0; double revenue = 0.0;
};
Sales_data& Sales_data::combine(const Sales_data& rhs) {
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

int main()
{
	Sales_data total;
	if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
			if (total.isbn() == trans.isbn()) {
				total.combine(trans);

			}
			else {
				cout << total.bookNo << ' ' << total.units_sold << ' ' << total.revenue;
				total = trans;
			}
		}
		cout << total.bookNo << ' ' << total.units_sold << ' ' << total.revenue;
	}
	else {
		std::cerr << "No data?!";
		return -1;
	}
}

