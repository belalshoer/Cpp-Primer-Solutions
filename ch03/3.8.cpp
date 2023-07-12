#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
/*
I like the while version*/
int main() {
	string s;
	cin >> s;
	string::size_type index = 0;
	while (index < s.size()) {
		s[index] = 'X';
		index++;
	}
	cout << s << "\n";
	for (index = 0; index < s.size(); index++) {
		s[index] = 'X';
	}
	cout << s;

}