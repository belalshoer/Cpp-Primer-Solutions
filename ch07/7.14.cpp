#include<iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;


struct Sales_data;

std::istream& read(std::istream& is, Sales_data& item);

struct Sales_data {

	std::string bookNo; unsigned units_sold = 0; double revenue = 0.0;

	std::string isbn() const {
		return bookNo;
	}

	Sales_data& combine(const Sales_data&);

	double avg_price() const;
	Sales_data() : bookNo(""), units_sold(0), revenue(0.0) {};
	Sales_data(const string& s) : bookNo(s) {};
	Sales_data(const string& s, unsigned u, double price) : bookNo(s), units_sold(u), revenue(u* price) {};
	Sales_data(std::istream& is) {
		read(is, *this);
	};
};
Sales_data& Sales_data::combine(const Sales_data& rhs) {
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}
double Sales_data::avg_price() const {
	if (units_sold) return revenue / units_sold;
	else return 0;
}
std::istream& read(std::istream& is, Sales_data& item) {
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}
std::ostream& print(std::ostream& os, const Sales_data& item) {
	os << item.isbn() << ' ' << item.units_sold << ' ' << item.revenue << ' ' << item.avg_price() << '\n';
	return os;
}

int main() {
	Sales_data total(cin);
	if (!total.isbn().empty()) {
		Sales_data trans;
		while (cin) {
			Sales_data trans(cin);
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else {
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
	else {
		std::cerr << "No data?!" << endl;
	}

	return 0;
}

