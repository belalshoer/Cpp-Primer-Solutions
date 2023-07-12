#include<iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
struct Sales_data{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
int main()
{
	Sales_data total;
	if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
			if (total.bookNo == trans.bookNo) {
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;

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

