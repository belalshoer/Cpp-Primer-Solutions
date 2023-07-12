#include<iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;


int main() {
	bool flag = true;
	string s1, s2;
	cin >> s1 >> s2;
	do {
		(s2 < s1) ? cout << s2 << " is less than " << s1 : (s2 == s1) ? 
			cout << "s1 equals s2" : cout << s1 << " is less than " << s2;
	} while (cin >> s1 >> s2);
	


	return 0;
}