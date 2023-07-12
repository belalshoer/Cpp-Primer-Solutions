#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
void cancatenate() {
	string s;
	string total;
	while (cin >> s) {
		total += s;
	}
	cout << total;
}
void spaced() {
	string s;
	string total;
	while (cin >> s) {
		if (total.empty()) {
			total += "" + s;
		}
		else {
			total += " " + s;
		}
	}
	cout << total;
}
int main() {
	return 0;
}