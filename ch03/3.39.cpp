#include<iostream>
#include <vector>
#include <iterator>
using std::vector;
using std::cout;
using std::cin;
using std::string;
/*
const char ca[] = {'h', 'e', 'l', 'l', 'o'};
const char *cp = ca;
while (*cp) {
 cout << *cp << endl; ++cp;
}
it prints all the array characters but because there exists no null terminator it will keep searching
through the memory for one
*/
int main() {
	string str1 = "abc", str2 = "def";
	if (str1 == str2) cout << "equals" << "\n";
	else if (str1 < str2) cout << "str2 > str1" << "\n";
	else cout << "str1 > str2" << "\n";
	char c1[] = "first";
	char c2[] = "second";
	if(strcmp(c1, c2) == 0) cout << "equals";
	if (strcmp(c1, c2) > 0) cout << "c1 > c2";
	if (strcmp(c1, c2) < 0) cout << "c2 > c1";


	return 0;
}