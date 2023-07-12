#include<iostream>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;

// + has higher precedence than ? :
int main() {
	string s = "word";
	string pl = s + (s[s.size() - 1] == 's' ? "" : "s");

}