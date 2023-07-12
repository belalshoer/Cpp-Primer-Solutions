#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
void big() {
	string s1, s2;
	cin >> s1 >> s2;
	if (s1 == s2) {
		cout << "they are equal";
	}
	else {
		if (s1 > s2) {
			cout << s1 << " is bigger";
		}
		else {
			cout << s1 << " is bigger";
		}
	}
}
void size() {
	string s1, s2;
	cin >> s1 >> s2;
	if (s1.size() == s2.size()) {
		cout << "they are equal";
	}
	else {
		(s1.size() > s2.size()) ? cout << s1 << " is longer" : cout << s2 << " is longer";
	}
}

int main() {
	return 0;
}