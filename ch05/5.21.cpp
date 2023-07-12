#include<iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;


int main() {
	string current, value;
	if (cin >> current) {
		while (cin >> value) {
			if (current == value && isupper(current[0])) {
				cout << current << " occured twice";
				break;
			}
			else {
				current = value;
				continue;
			}
		}
	}
	else {
		cout << "no strings were entered";
	}



	return 0;
}