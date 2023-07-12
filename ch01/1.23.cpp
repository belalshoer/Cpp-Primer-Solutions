#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item item, current_item;
	if (std::cin >> item) {
		int cnt = 1;
		while (std::cin >> current_item) {
			if (item.isbn() == current_item.isbn()) {

				++cnt;
			}
			else {
				std::cout << item.isbn() << " occured " << cnt << " times " << std::endl;
				item = current_item;
				cnt = 1;

			}
		}
		std::cout << item.isbn() << " occured " << cnt << " times " << std::endl;
	}
	return 0;
}