#include<iostream>
#include <string>
struct  Sales_data
{
	std::string bookNo;
	unsigned units_sold;
	double revenue;
};
int ex1_5_1() {
	double price;
	Sales_data data1;
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold * price;
	std::cout << data1.bookNo << " " << data1.units_sold << " " << data1.revenue << " " << price;
	return 0;
}
int ex1_5_2() {
	Sales_data data1, data2;
	double price;
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold * price;
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;
	if (data1.bookNo == data2.bookNo) {
		unsigned total_count = data1.units_sold + data2.units_sold;
		double total_revenue = data1.revenue + data2.revenue;
		std::cout << data1.bookNo << " " << total_count << " " << total_revenue << "\n";
		if (total_count != 0) {
			std::cout << total_revenue / total_count;
		}
		else {
		std::cerr << "no books sold!";

		}
		return 0;
	}
	else {
		std::cerr << "Data must refer to the same ISBN" << std::endl;
		return -1;
	}
}
int ex1_6() {
	Sales_data total, second;
	double price;
	if (std::cin >> total.bookNo >> total.units_sold >> price) {
		total.revenue = total.units_sold * price;
		while (std::cin >> second.bookNo >> second.units_sold >> price) {
			second.revenue = second.units_sold * price;
			if (total.bookNo == second.bookNo) {
				total.units_sold += second.units_sold;
				total.revenue += second.revenue;
			}
			else {
				std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue;
				total.bookNo = second.bookNo;
			}

		}
		std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue;
		return 0;
	}
	else
	{
		std::cerr << "NO data?!";
		return -1;
	}
}
int main()
{
	ex1_5_1();
	ex1_5_2();
	ex1_6();

	return 0;

	
}