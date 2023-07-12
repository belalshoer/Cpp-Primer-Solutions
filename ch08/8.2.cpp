#include<iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

std::istream& read(std::istream& is) {
	string s;
	while (is >> s) cout << s;
	is.clear();
	return is;
}


int main()
{
	read(cin);
	return 0;
}

