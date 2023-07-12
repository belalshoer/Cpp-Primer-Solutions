#include<iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
/*
no, the parameters don't have the same type
in the first one we didn't change the parameter so it is const
in the second we had to change so it can't  be const*/
void is_capital(const string& s) {
	bool flag = false;
	for (int i = 0; i < s.size(); ++i) {
		if(s[i] >= 65 && s[i] <= 90)  flag = true;
	}
	(flag) ? cout << "there is a capital letter" : cout << "there are no capital letters";
}
string to_lower(string& s) {
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] >= 65 && s[i] <= 90)  s[i] += 32;
	}
	return s;
}

int main()
{
	is_capital("heSy");
	string s = "sfsDJd/sf./?";
	cout <<'\n' <<  to_lower(s);
	return 0;
}

