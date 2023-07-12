#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
/*without a range for:
	string s , f;
	cin >> s;
	f = string(s.size(), 'X');
	cout << f;
	return 0;*/

//with a range for
int main() {
	string s;
	cin >> s;
	for (auto &c : s) {
		c = 'X';
	}
	cout << s;
}