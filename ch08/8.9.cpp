#include<iostream>
#include<sstream>
#include <string>

using std::string;
using std::cout;
using std::cin;

std::istringstream& read(std::istringstream& is) {
	string s;
	while (is >> s) cout << s;
	is.clear();
	return is;
}


int main()
{
	string s;
	cin >> s;
	std::istringstream iss(s);
	read(iss);
	return 0;
}

