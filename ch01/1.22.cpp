#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item item, total;
	if (std::cin >> item) {
		int cnt = 1;
		total = item;
		while (std::cin >> item) {
			if (item.isbn() == total.isbn()) {
				total += item;
				++cnt;
			}
			else {
				std::cout << total << std::endl;
				total = item;
				cnt = 1;

			}
		}
		std::cout << total;
	}
	return 0;
}