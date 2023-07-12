#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
void line() {
	string line;
	while (std::getline(cin, line)) {
		cout << line;
	}
}
void word() {
	string s;
	while (cin >> s) {
		cout << s;
	}
}
int main() {
	
	return 0;
	
}