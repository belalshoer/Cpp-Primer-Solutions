#include<iostream>
#include <string>
#include <vector>
#include <stdexcept>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::runtime_error;
void factorial() {
	cout << "enter your desired number";
	int x;


	while (cin >> x) {
		unsigned long long result = x;
		if (x < 0)
		{
			cout << "enter a positive number";
		}

		else if (x == 0) {
			cout << 1;
		}
		else {
			while (x > 1)
				result *= --x;
			cout << result << '\n';

		}



	}
}

int main() {
	factorial();
	return 0;
}

