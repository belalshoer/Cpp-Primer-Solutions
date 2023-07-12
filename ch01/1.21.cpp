#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item item,  total;
	if (std::cin >> item) {
		total = item;
		while (std::cin >> item) {
			if (item.isbn() == total.isbn()) {
				total += item;
			}
			else {
				std::cout << total  <<  std::endl;
				total = item;
				
			}
		}
		std::cout << total;
	}
	return 0;
}